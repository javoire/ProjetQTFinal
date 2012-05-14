#ifndef FILMNODE_H
#define FILMNODE_H

#include <iostream>
#include <QLabel>

class FilmNode;
typedef FilmNode* FilmNode_Ptr;
#include "graphwidget.h"

using namespace std;

class FilmNode : public QWidget
{
    Q_OBJECT

public:
    FilmNode(QWidget *parent, int categoryIndex = 0, float diameter = 8.f, float minDiameter = 8.f, float maxDiameter = 25.f);

    inline void setColor(QColor color) { color_ = color; }
    inline void setDiameter(float diameter) { diameter_ = diameter; }
    inline void setMaxDiameter(float maxDiameter) { maxDiameter_ = maxDiameter; }
    inline void setMinDiameter(float minDiameter) { minDiameter_ = minDiameter; }
    inline void setCategoryIndex(int categoryIndex) { categoryIndex_ = categoryIndex; }

    inline const QColor & color() const { return color_; }
    inline const int & categoryIndex() const { return categoryIndex_; }

    void updateDiameter(float newDiameter, bool isIncreasing);

protected:
    void paintEvent(QPaintEvent *event);
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
    void mousePressEvent ( QMouseEvent * event );

private:

    GraphWidget *parent_;
    QColor color_;
    int categoryIndex_;
    float diameter_;
    float minDiameter_;
    float maxDiameter_;
};

#endif // FILMNODE_H
