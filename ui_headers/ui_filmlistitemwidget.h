/********************************************************************************
** Form generated from reading UI file 'filmlistitemwidget.ui'
**
** Created: Mon May 14 01:54:38 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMLISTITEMWIDGET_H
#define UI_FILMLISTITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilmListItemWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *ratingLabel;
    QFrame *line;
    QLabel *filmName;

    void setupUi(QWidget *FilmListItemWidget)
    {
        if (FilmListItemWidget->objectName().isEmpty())
            FilmListItemWidget->setObjectName(QString::fromUtf8("FilmListItemWidget"));
        FilmListItemWidget->resize(195, 26);
        FilmListItemWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 185);"));
        horizontalLayout = new QHBoxLayout(FilmListItemWidget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ratingLabel = new QLabel(FilmListItemWidget);
        ratingLabel->setObjectName(QString::fromUtf8("ratingLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ratingLabel->sizePolicy().hasHeightForWidth());
        ratingLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        ratingLabel->setFont(font);
        ratingLabel->setStyleSheet(QString::fromUtf8("color: rgb(206, 193, 4);"));

        horizontalLayout->addWidget(ratingLabel);

        line = new QFrame(FilmListItemWidget);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        filmName = new QLabel(FilmListItemWidget);
        filmName->setObjectName(QString::fromUtf8("filmName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filmName->sizePolicy().hasHeightForWidth());
        filmName->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        filmName->setFont(font1);
        filmName->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(filmName);


        retranslateUi(FilmListItemWidget);

        QMetaObject::connectSlotsByName(FilmListItemWidget);
    } // setupUi

    void retranslateUi(QWidget *FilmListItemWidget)
    {
        FilmListItemWidget->setWindowTitle(QApplication::translate("FilmListItemWidget", "Form", 0, QApplication::UnicodeUTF8));
        ratingLabel->setText(QApplication::translate("FilmListItemWidget", "100", 0, QApplication::UnicodeUTF8));
        filmName->setText(QApplication::translate("FilmListItemWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FilmListItemWidget: public Ui_FilmListItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMLISTITEMWIDGET_H
