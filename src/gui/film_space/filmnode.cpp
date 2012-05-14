#include "filmnode.h"

FilmNode::FilmNode(QWidget *parent, int categoryIndex, float diameter, float minDiameter, float maxDiameter)
    : QWidget(parent), categoryIndex_(categoryIndex), diameter_(diameter), minDiameter_(minDiameter), maxDiameter_(maxDiameter){

    parent_ = (GraphWidget*)parent;
}

void FilmNode::paintEvent(QPaintEvent *) {

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(color_);
    painter.setBrush(color_);
    painter.drawEllipse(0,0,diameter_,diameter_);
    painter.end();
}

void FilmNode::enterEvent(QEvent *) {

    QWidget::setCursor(Qt::PointingHandCursor);
    // EFFECT SIZE
    foreach(QObject *o, parent_->children()) {
        if (FilmNode* f = qobject_cast<FilmNode*>(o))
            if (f->categoryIndex() == categoryIndex_)
                f->updateDiameter(maxDiameter_, true);
    }

    // LABEL
    QLabel & label = *parent_->labels[categoryIndex_];
    label.setVisible(true);
    label.move(mapTo(parent_, QPoint(50,-50)));

    this->update();
}

void FilmNode::leaveEvent(QEvent *) {

    QWidget::setCursor(Qt::ArrowCursor);
    foreach(QObject *o, parent_->children()) {
        if (FilmNode* f = qobject_cast<FilmNode*>(o))
            if (f->categoryIndex() == categoryIndex_)
                f->updateDiameter(minDiameter_, false);
    }

    QLabel & label = *parent_->labels[categoryIndex_];
    label.setVisible(false);

    this->update();
}

void FilmNode::updateDiameter(float newDiameter, bool isIncreasing) {

    resize(newDiameter, newDiameter);
    if (isIncreasing)
        move(mapTo(parent_, QPoint(-newDiameter/2.f, -newDiameter/2.f)));
    else
        move(mapTo(parent_, QPoint(diameter_/2.f, diameter_/2.f)));
    diameter_ = newDiameter;
}

void FilmNode::mousePressEvent(QMouseEvent *) {

    parent_->showCategoryInfo(categoryIndex_);
}
