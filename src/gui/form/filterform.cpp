#include "filterform.h"
#include "ui_filterform.h"
#include "iostream"
#include <QtGui>
#include <QList>
#include "genrecheckbox.h"

#include "controller/filmspaceupdater.h"
#include "gui/morefilmsoption.h"

FilterForm * FilterForm::instance;

using namespace std;

FilterForm::FilterForm(QWidget *parent) : // take a QList here with all the genres in it... also take year min and max
    QMainWindow(parent),
    ui(new Ui::FilterForm)
{
    instance = this;


    ui->setupUi(this);



    ui->filmListProgressBar->setValue(0);
    ui->filmListProgressBar->setVisible(false);
    // temp. these should come from constructor also
    int yearMin = 1888;
    int yearMax = 2012;

    // generate UI elements
    placeYearSlider(yearMin, yearMax);

    FilmSpaceUpdater * fsu = FilmSpaceUpdater::instance();
    QObject::connect(this, SIGNAL(titleChanged(QString)), fsu, SLOT(updateName(QString)));
    QObject::connect(this, SIGNAL(searchButtonClicked()), fsu, SLOT(updateInterfaces()));

    filmSpace_ = new GraphWidget(ui->filmSpaceWidget);    
    ui->filmSpaceLayout->addWidget(filmSpace_);

    QObject::connect(filmSpace_, SIGNAL(showCategory(CategoryResult*)), this, SLOT(resultListChanged(CategoryResult*)));

    moreFilmsOption = new MoreFilmsOption(ui->filmListScrollArea);
    moreFilmsOption->setVisible(false);

}

GraphWidget* FilterForm::getFilmSpace(){
    return filmSpace_;
}

void FilterForm::addGenre(QString name){
    QFont checkBoxFont;
    checkBoxFont.setFamily(QString::fromUtf8("Myriad Pro"));
    checkBoxFont.setPointSize(7);

    genreCheckBox *genreBox = new genreCheckBox();
    genreBox->setFont(checkBoxFont);
    genreBox->setObjectName(name);
    genreBox->setText(name);
    FilmSpaceUpdater * fsu = FilmSpaceUpdater::instance();
    connect(genreBox, SIGNAL(isChecked(bool,QString)), fsu, SLOT(updateGenre(bool, QString)));

    genreCheckBoxes.append(genreBox); // store all in one list

}

void FilterForm::placeYearSlider(int yearMin, int yearMax) {

    doubleSlider = new DoubleSliderWidget(this, 201, 25, yearMin, yearMax);


    FilmSpaceUpdater* fsu = FilmSpaceUpdater::instance();

    connect(doubleSlider, SIGNAL(yearMinChange(int)), this, SLOT(DoubleSlider_yearMinChanged(int)));
    connect(doubleSlider, SIGNAL(yearMaxChange(int)), this, SLOT(DoubleSlider_yearMaxChanged(int)));
    connect(doubleSlider, SIGNAL(yearLowSetByUser(int)), fsu, SLOT(updateYearLow(int)));
    connect(doubleSlider, SIGNAL(yearHighSetByUser(int)), fsu, SLOT(updateYearHigh(int)));

    ui->labelYearMin->setText(QString::number(yearMin));
    ui->labelYearMax->setText(QString::number(yearMax));

    ui->yearSliderLayout->addWidget(doubleSlider);

}

bool FilterForm::createGenreCheckBoxes(QList<QString>) {
    return false;
}

bool FilterForm::placeGenreBoxes() {

    if(genreCheckBoxes.isEmpty())
        return false;

    // place the checkboxes on UI
    int i;
    for (i = 0; i < genreCheckBoxes.size()/2; i++) { // put half here
        ui->checkBoxesLeft->addWidget(genreCheckBoxes.at(i));
    }

    for (; i < genreCheckBoxes.size(); i++) { // put rest here
        ui->checkBoxesRight->addWidget(genreCheckBoxes.at(i));
    }

    return true;
}

void FilterForm::checkToggled(bool isChecked, QString name) {

    emit genreIsClicked(isChecked, name);
}

FilterForm::~FilterForm()
{
    delete ui;
}

// these two are called only when the user releases the mouse: has chosen a year
void FilterForm::DoubleSlider_yearMinSetByUser(int value) {
    emit yearMinChanged(value);
}
void FilterForm::DoubleSlider_yearMaxSetByUser(int value) {
    emit yearMaxChanged(value);
}

// these two updates the labels in real time
void FilterForm::DoubleSlider_yearMinChanged(int value) {
    ui->labelYearMin->setText(QString::number(value));
}
void FilterForm::DoubleSlider_yearMaxChanged(int value) {
    ui->labelYearMax->setText(QString::number(value));
}

void FilterForm::on_titleInput_textChanged(const QString &arg1)
{
    emit titleChanged(arg1);
}

void FilterForm::on_Search_released()
{
    emit searchButtonClicked();
}


bool FilterForm::compare_films(Film_Ptr a, Film_Ptr b){
    if(a->rating() < b->rating()) return false;
    return true;
}

void FilterForm::resultListChanged(CategoryResult * catRes){

    ui->filmListScrollArea->verticalScrollBar()->setValue(0);


    ui->filmListLayout_2->removeWidget(moreFilmsOption);
    delete moreFilmsOption;
    moreFilmsOption = NULL;
    foreach(FilmListItemWidget *fliw, filmListItemWidgets_){
        ui->filmListLayout_2->removeWidget(fliw);
        delete fliw;
    }

    filmListItemWidgets_.clear();


    if(catRes != NULL){
        CategoryResult::FilmList films = catRes->films();
        if(films.size() > 0){
            films.sort(FilterForm::compare_films);
            long nFilms = films.size();


            ui->filmListProgressBar->setVisible(true);
            ui->filmListProgressBar->setMaximum(films.size());
            ui->filmListProgressBar->setValue(0);
            CategoryResult::FilmList::iterator fit(films.begin());
            showFilms(films, nFilms);
        }
    }

}

void FilterForm::showFilms(CategoryResult::FilmList films, long nFilms){

    FilmListItemWidget * fliw;
    for(long i = 0; i < nFilms && i < 100; ++i){
        Film_Ptr film_ptr = films.front();
        films.pop_front();
        Film& film = *film_ptr;
        fliw = new FilmListItemWidget(ui->filmListScrollArea);
        fliw->setFilmName(QString::fromStdString(film.name()));
        fliw->setRating(film.rating());
        fliw->setFilm(film_ptr);
        ui->filmListLayout_2->addWidget(fliw);
        filmListItemWidgets_.push_back(fliw);
        ui->filmListProgressBar->setValue(ui->filmListProgressBar->value()+1);
    }
    if(nFilms > 100){
        if(moreFilmsOption == NULL)
            moreFilmsOption = new MoreFilmsOption(ui->filmListScrollArea);
        ui->filmListLayout_2->addWidget(moreFilmsOption);
        nFilms -= 100;
        moreFilmsOption->setNextIteration(this, films, nFilms);

    }
    else{
        if(moreFilmsOption != NULL)
            moreFilmsOption->setVisible(false);
    }
}
