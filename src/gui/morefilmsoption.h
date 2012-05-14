#ifndef MOREFILMSOPTION_H
#define MOREFILMSOPTION_H


class MoreFilmsOption;
#include "controller/categoryresult.h"
#include "gui/form/filterform.h"
#include <QWidget>

namespace Ui {
    class MoreFilmsOption;
}

class MoreFilmsOption : public QWidget {
    Q_OBJECT
public:
    MoreFilmsOption(QWidget *parent = 0);
    ~MoreFilmsOption();
    void setNextIteration(FilterForm* ff, CategoryResult::FilmList films, long nFilms){
        ff_ = ff;
        films_ = films;
        nFilms_ = nFilms;
    }

protected:
    void changeEvent(QEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
private:
    Ui::MoreFilmsOption *ui;

    FilterForm* ff_;
    CategoryResult::FilmList films_;
    long nFilms_;

};

#endif // MOREFILMSOPTION_H
