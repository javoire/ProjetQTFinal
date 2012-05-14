#ifndef FILMLISTITEMWIDGET_H
#define FILMLISTITEMWIDGET_H

#include <QWidget>
#include "model/film.h"

namespace Ui {
    class FilmListItemWidget;
}

class FilmListItemWidget : public QWidget {
    Q_OBJECT
public:
    FilmListItemWidget(QWidget *parent = 0);
    ~FilmListItemWidget();

    void setFilmName(QString name);
    void setRating(long rating);

    void setFilm(Film_Ptr film){ film_ = film; }

protected:
    void changeEvent(QEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    Ui::FilmListItemWidget *ui;
    Film_Ptr film_;
};

#endif // FILMLISTITEMWIDGET_H
