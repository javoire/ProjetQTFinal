#include "doublesliderwidget.h"
#include "sliderhandle.h"
#include "math.h"

#include <iostream>
#include <QGridLayout>
#include <QGroupBox>

using namespace std;

DoubleSliderWidget::DoubleSliderWidget(QWidget *parent, int width, int height, int setValueLow, int setValueHigh) :
    QGraphicsView(parent)
{
    scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(0, 0, width, height);

    valueLow = setValueLow;
    valueHigh = setValueHigh;

    yearMin = setValueLow;
    yearMax = setValueHigh;

    int margin = 0;

    setScene(scene);
    setCacheMode(CacheBackground);
    setViewportUpdateMode(BoundingRectViewportUpdate);
    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
    scale(qreal(1), qreal(1));
//    setMinimumSize(width, height);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setWindowTitle(tr("Slider"));
    setFixedSize(width+margin, height+margin);

    setContentsMargins(QMargins(margin, margin, margin, margin));
    setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    setLineWidth(1);
    createYearSlider(width, height);

}

void DoubleSliderWidget::createYearSlider(int width, int height) {
    // global vars
    sliderHeight = height;
    sliderWidth = width;
    handleWidth = 15;
    sliderMinWidth = 0 + handleWidth;
    sliderPos.setX(0);
    sliderPos.setY(0);

    // size of slider
    leftPoint.setX(sliderPos.x());
    leftPoint.setY(sliderPos.y());
    rightPoint.setX(sliderPos.x()+sliderWidth);
    rightPoint.setY(sliderPos.y()+sliderHeight);

    // create the elements
    slider = new QGraphicsRectItem(QRect(leftPoint, rightPoint));
    handleLeft = new SliderHandle(this, "sliderLeft", handleWidth, sliderHeight);
    handleRight = new SliderHandle(this, "sliderRight", handleWidth, sliderHeight);
    visibleHandleLeft = new SliderHandle(this, "sliderLeft", handleWidth, sliderHeight);
    visibleHandleRight = new SliderHandle(this, "sliderRight", handleWidth, sliderHeight);

    // styles
    slider->setPen(Qt::NoPen);

    slider->setBrush(QColor(230,230,230,255));

    handleLeft->setBrush(QColor(255,0,0,0));
    handleRight->setBrush(QColor(255,0,0,0));

    handleRight->setZValue(5);
    handleLeft->setZValue(5);
    visibleHandleLeft->setZValue(2);
    visibleHandleRight->setZValue(2);
    slider->setZValue(1);

    visibleHandleLeft->setMovable(false);
    visibleHandleRight->setMovable(false);

    // position handles
    handleRight->setX(rightPoint.x()-handleWidth);
    handleRight->setY(sliderPos.y());
    handleLeft->setX(leftPoint.x());
    handleLeft->setY(sliderPos.y());

    visibleHandleLeft->setPos(handleLeft->pos());
    visibleHandleRight->setPos(handleRight->pos());

    scene->addItem(slider);
    scene->addItem(handleLeft);
    scene->addItem(handleRight);
    scene->addItem(visibleHandleLeft);
    scene->addItem(visibleHandleRight);

}

void DoubleSliderWidget::itemReleased(SliderHandle *item) {

    // return the actual sliderhandle on top of the visual one on release
    handleRight->setY(visibleHandleRight->y());
    handleRight->setX(visibleHandleRight->x());
    handleLeft->setY(visibleHandleLeft->y());
    handleLeft->setX(visibleHandleLeft->x());

    // emit to form
    if ( item == handleLeft) {
        emit yearLowSetByUser(yearMin);
        emit yearHighSetByUser(yearMax);
    }
    if ( item == handleRight) {
        emit yearLowSetByUser(yearMin);
        emit yearHighSetByUser(yearMax);
    }
}

void DoubleSliderWidget::calcYearValues(SliderHandle *item) {

    double pos = 0;
    double posPercent = 0;

    // get position of handles in percent
    if ( item == handleLeft ) {

        pos = visibleHandleLeft->x();
        posPercent = pos/(sliderWidth-handleWidth*2);



        // emit signal
        yearMin = valueLow + (valueHigh - valueLow)*posPercent;
        emit yearMaxChange(yearMax);
        emit yearMinChange(yearMin);

    }

    if ( item == handleRight ) {

        pos = visibleHandleRight->x()-handleWidth;
        posPercent = (pos/(sliderWidth-handleWidth*2));


        // emit signal
        yearMax = valueLow + (valueHigh - valueLow)*posPercent;
        emit yearMaxChange(yearMax);
        emit yearMinChange(yearMin);

    }

}

void DoubleSliderWidget::itemMoved(SliderHandle *item) {

    visibleHandleLeft->setX(handleLeft->x()); // move the visual handle with the real handle
    visibleHandleRight->setX(handleRight->x()+1);

    double xmin = 0; // left boundary
    double xmax = this->width(); // right boundary

    // don't exceed sliders boundaries
    if (handleLeft->x() < xmin)
        visibleHandleLeft->setX(xmin);
    if (handleLeft->x() > xmax-handleWidth*2)
        visibleHandleLeft->setX(xmax-handleWidth*2);

    if (handleRight->x() > xmax-handleWidth)
        visibleHandleRight->setX(xmax-handleWidth);
    if (handleRight->x() < xmin+handleWidth)
        visibleHandleRight->setX(xmin+handleWidth);

    // push the other slider on collision
    if (item == handleLeft) {
        if (visibleHandleLeft->x() > visibleHandleRight->x()-handleWidth)
            handleRight->setX(visibleHandleLeft->x()+handleWidth);
    }
    if (item == handleRight) {
        if (visibleHandleRight->x() < visibleHandleLeft->x()+handleWidth)
            handleLeft->setX(visibleHandleRight->x()-handleWidth);
    }

    leftPoint.setX(visibleHandleLeft->x()); // adjust slider size with handle movement
    slider->setRect(QRect(leftPoint, rightPoint));

    rightPoint.setX(visibleHandleRight->x()+handleWidth-1);
    slider->setRect(QRect(leftPoint, rightPoint));

}
