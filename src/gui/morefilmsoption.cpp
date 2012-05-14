#include "morefilmsoption.h"
#include "ui_morefilmsoption.h"

MoreFilmsOption::MoreFilmsOption(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MoreFilmsOption)
{
    ui->setupUi(this);

    this->setCursor(Qt::PointingHandCursor);

}

MoreFilmsOption::~MoreFilmsOption()
{
    delete ui;
}

void MoreFilmsOption::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MoreFilmsOption::mouseReleaseEvent(QMouseEvent *){
    ff_->showFilms(films_, nFilms_);
}
