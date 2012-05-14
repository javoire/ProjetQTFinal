#include <QPixmap>
#include "help.h"

Help::Help(QWidget *parent, Qt::WindowFlags f) : QWidget(parent, f)
{
}

void Help::paintEvent(QPaintEvent *) {

    QPainter painter(this);
    QPixmap pixmap(HELP_FILE);
    painter.drawPixmap(QRect(0,0,610, 458), pixmap);
    painter.end();
}
