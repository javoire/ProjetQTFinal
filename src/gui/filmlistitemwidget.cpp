#include "filmlistitemwidget.h"
#include "ui_filmlistitemwidget.h"
#include "form/filmdisplay.h"
#include "form/filterform.h"

FilmListItemWidget::FilmListItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FilmListItemWidget)
{
    ui->setupUi(this);
    this->setCursor(Qt::PointingHandCursor);
}

FilmListItemWidget::~FilmListItemWidget()
{
    delete ui;
}

void FilmListItemWidget::changeEvent(QEvent *e)
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

void FilmListItemWidget::setFilmName(QString name){
    ui->filmName->setText(name);
}

void FilmListItemWidget::mouseReleaseEvent(QMouseEvent*){
    this->setStyleSheet("FilmListItemWidget { background-color: #ddffdd} ");
    QFrame* popup = new QFrame(FilterForm::instance, Qt::Popup | Qt::Dialog);
    popup->resize(560,220);
    popup->setFrameStyle(6);
    new FilmDisplay(popup, film_);
    popup->show();
}

void FilmListItemWidget::setRating(long rating){
    ui->ratingLabel->setText(QString::number(rating));
}
