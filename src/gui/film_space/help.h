#ifndef HELP_H
#define HELP_H

#include <QWidget>
#include <QPainter>


class Help : public QWidget
{
    Q_OBJECT

public:
    Help(QWidget *parent = 0, Qt::WindowFlags f = 0 );

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // HELP_H
