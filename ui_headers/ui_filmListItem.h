/********************************************************************************
** Form generated from reading UI file 'filmListItem.ui'
**
** Created: Fri May 11 18:33:59 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMLISTITEM_H
#define UI_FILMLISTITEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filmListItemWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *filmName;

    void setupUi(QWidget *filmListItemWidget)
    {
        if (filmListItemWidget->objectName().isEmpty())
            filmListItemWidget->setObjectName(QString::fromUtf8("filmListItemWidget"));
        filmListItemWidget->resize(189, 36);
        filmListItemWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));
        verticalLayout = new QVBoxLayout(filmListItemWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        filmName = new QLabel(filmListItemWidget);
        filmName->setObjectName(QString::fromUtf8("filmName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filmName->sizePolicy().hasHeightForWidth());
        filmName->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        filmName->setFont(font);

        verticalLayout->addWidget(filmName);


        retranslateUi(filmListItemWidget);

        QMetaObject::connectSlotsByName(filmListItemWidget);
    } // setupUi

    void retranslateUi(QWidget *filmListItemWidget)
    {
        filmListItemWidget->setWindowTitle(QApplication::translate("filmListItemWidget", "Form", 0, QApplication::UnicodeUTF8));
        filmName->setText(QApplication::translate("filmListItemWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class filmListItemWidget: public Ui_filmListItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMLISTITEM_H
