#ifndef GENRENODE_H
#define GENRENODE_H

#include <string>
#include "node.h"
using namespace std;

class GenreNode : public Node
{
public:
    GenreNode(QWidget *parent, QColor color, string name);

    inline void setArch(float arch) { arch_ = arch; }
    inline void setAngle(float angle) { angle_ = angle; }
    inline void setColor(QColor color) { color_ = color; }
    inline void setName(string name) { name_ = name; }

    inline const float & arch() const { return arch_; }
    inline const float & angle() const { return angle_; }
    inline const QColor & color() const { return color_; }
    inline const string & name() const { return name_; }

protected:
    void paintEvent(QPaintEvent *event);

private:

    float arch_;
    float angle_;
    QColor color_;
    string name_;
};

#endif // GENRENODE_H
