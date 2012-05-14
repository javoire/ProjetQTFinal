#ifndef FILTERFORM_H
#define FILTERFORM_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include <QSlider>
#include <QLineEdit>
#include <QList>

namespace Ui {
class FilterForm;
}
class FilterForm;
#include "doublesliderwidget.h"
#include "genrecheckbox.h"
#include "controller/categoryresult.h"
#include "gui/filmlistitemwidget.h"
#include "gui/film_space/graphwidget.h"
#include "gui/morefilmsoption.h"

class FilterForm : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit FilterForm(QWidget *parent = 0);
    bool placeGenreBoxes();
    void placeYearSlider(int yearMin, int yearMax);
    bool createGenreCheckBoxes(QList<QString> genres);
    ~FilterForm();
    void addGenre(QString name);

    static bool compare_films(Film_Ptr a, Film_Ptr b);

    static FilterForm * instance;

    Ui::FilterForm * getUi() const { return ui; }
    GraphWidget* getFilmSpace();

    void showFilms(CategoryResult::FilmList films, long nFilms);

signals:
    void genreIsClicked(bool checked, QString name);
    void yearMinChanged(int yearMin);
    void yearMaxChanged(int yearMax);
    void titleChanged(QString title);
    void searchButtonClicked();
    
public slots:
    void DoubleSlider_yearMinChanged(int value);
    void DoubleSlider_yearMaxChanged(int value);
    void DoubleSlider_yearMinSetByUser(int value);
    void DoubleSlider_yearMaxSetByUser(int value);
    void checkToggled(bool checked, QString name);
    void resultListChanged(CategoryResult * catRes);

private slots:
    void on_titleInput_textChanged(const QString &arg1);

    void on_Search_released();

private:
    Ui::FilterForm *ui;
    QSlider* yearToSlider;
    DoubleSliderWidget* doubleSlider;
    QLineEdit *titleInput;
    QList<QCheckBox*> genreCheckBoxes;
    QList<FilmListItemWidget*> filmListItemWidgets_;
    GraphWidget* filmSpace_;
    MoreFilmsOption* moreFilmsOption;

};

#endif // FORMTEST_H
