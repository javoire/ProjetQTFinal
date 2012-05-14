#ifndef FILMDISPLAY_H
#define FILMDISPLAY_H

#include <QFrame>
#include "model/film.h"

namespace Ui {
class FilmDisplay;
}

class FilmDisplay : public QFrame
{
    Q_OBJECT
    
public:
    FilmDisplay(QFrame *parent, Film_Ptr film);
    ~FilmDisplay();
    Ui::FilmDisplay *ui;
    QFrame *parent1;

private:


private slots:
    void on_buttonClose_released();
};

#endif // FILMDISPLAY_H
