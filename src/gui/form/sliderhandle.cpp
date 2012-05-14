#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <iostream>

#include "sliderhandle.h"
#include "doublesliderwidget.h"

using namespace std;

SliderHandle::SliderHandle(DoubleSliderWidget *sliderWidget, char *sliderName, double setWidth, double setHeight)
    : doubleSlider(sliderWidget)
{
    setFlag(ItemIsMovable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);

    pen.setStyle(Qt::NoPen);
    color.setRgbF(0.8,0.8,0.8,1);

    brush.setColor(color);
    brush.setStyle(Qt::SolidPattern);

    width = setWidth;
    height = setHeight;

    name = sliderName;
}

void SliderHandle::setMovable(bool movable) {
    if(movable)
        setFlag(ItemIsMovable, true);
    else
        setFlag(ItemIsMovable, false);
}

QRectF SliderHandle::boundingRect() const
{
    return QRect(0, 0, width, height);
}

QPainterPath SliderHandle::shape() const
{
    QPainterPath path;
    path.addRect(0, 0, width, height);
    return path;
}

bool SliderHandle::collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode) const {

    return QGraphicsItem::collidesWithItem(other, mode);
}

QVariant SliderHandle::itemChange(GraphicsItemChange change, const QVariant &value)
{
    switch (change) {
    case ItemPositionHasChanged:
        doubleSlider->itemMoved(this);
        doubleSlider->calcYearValues(this);
        break;
    default:
        break;
    };

    return QGraphicsItem::itemChange(change, value);
}

void SliderHandle::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    update();
    QGraphicsItem::mousePressEvent(event);
}

void SliderHandle::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    update();
    QGraphicsItem::mouseMoveEvent(event);
}

void SliderHandle::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    update();
    doubleSlider->itemReleased(this);
    QGraphicsItem::mouseReleaseEvent(event);
}

void SliderHandle::setBrush(QColor setColor) {
    brush.setColor(setColor);
    update();
}

void SliderHandle::setPen(QPen setPen) {
    pen = setPen;
    update();
}

void SliderHandle::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawRect(0, 0, width, height+1);
}
