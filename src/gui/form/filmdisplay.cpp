#include "filmdisplay.h"
#include "ui_filmdisplay.h"
#include <QString>

FilmDisplay::FilmDisplay(QFrame *parent, Film_Ptr film) :
    QFrame(parent),
    ui(new Ui::FilmDisplay)
{
    ui->setupUi(this);

    parent1 = parent;

    ui->labelTitle->setText(QString::fromStdString(film->name()));
    QString genreList = "";
    Film::GenrePtrList gpl = film->genres();
    long i = 0;
    for(Film::GenrePtrList::iterator git(gpl.begin()); git != gpl.end(); ++git){
        ++i;
        Genre& genre = **git;
        genreList.append(QString::fromStdString(genre.name()));
        if(i < gpl.size())
            genreList.append(", ");
    }
    ui->labelGenre->setText(genreList);
    ui->labelRating->setText(QString::number((double)film->rating()/10));
    ui->labelLength->setText(QString::number(film->length()).append(" min"));
    ui->labelYear->setText(QString::number(film->year()));

}

FilmDisplay::~FilmDisplay()
{
    delete ui;
}

void FilmDisplay::on_buttonClose_released()
{
    parent1->close();
}
