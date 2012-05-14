#include "genrenode.h"

GenreNode::GenreNode(QWidget *parent, QColor color, string name)
    : Node(parent), color_(color), name_(name) {}

void GenreNode::paintEvent(QPaintEvent *) {

    QPainter painter(this);
    painter.setPen(Qt::black);
    painter.setBrush(Qt::black);
    painter.drawEllipse(0,0,5,5);
}
