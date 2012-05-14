#ifndef NODE_H
#define NODE_H

#include <QWidget>
#include <QPainter>
#include <iostream>

class Node : public QWidget
{
    Q_OBJECT

public:
    Node(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent ( QMouseEvent * event );
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);

private:
    QWidget *widget_;
    QColor colorBrush_;
    QColor colorPen_;
};

#endif
