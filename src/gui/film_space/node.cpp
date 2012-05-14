#include "node.h"
#include "help.h"

Node::Node(QWidget *parent) : QWidget(parent) {
    colorBrush_ = QColor(255, 255, 255, 160);
    colorPen_ = QColor(255, 255, 255, 160);
}

void Node::paintEvent(QPaintEvent *) {

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(colorPen_);
    painter.setBrush(colorBrush_);
    painter.drawEllipse(0,0,30,30);
    painter.setPen(Qt::white);
    painter.setFont(QFont("Arial", 16,QFont::Bold));
    painter.drawText(QRectF(9,2,20,20), "?");
    painter.end();
}

void Node::mousePressEvent(QMouseEvent *) {

    Help *help = new Help(this, (Qt::Popup | Qt::Dialog));
    help->resize(610, 458);
    help->show();
}

void Node::enterEvent(QEvent *) {
    QWidget::setCursor(Qt::PointingHandCursor);
    colorBrush_ = QColor(255, 255, 255, 200);
    update();
}

void Node::leaveEvent(QEvent *) {
    QWidget::setCursor(Qt::ArrowCursor);
    colorBrush_ = QColor(255, 255, 255, 160);
    update();
}
