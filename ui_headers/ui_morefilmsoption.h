/********************************************************************************
** Form generated from reading UI file 'morefilmsoption.ui'
**
** Created: Mon May 14 01:54:38 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREFILMSOPTION_H
#define UI_MOREFILMSOPTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoreFilmsOption
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *MoreFilmsOption)
    {
        if (MoreFilmsOption->objectName().isEmpty())
            MoreFilmsOption->setObjectName(QString::fromUtf8("MoreFilmsOption"));
        MoreFilmsOption->resize(137, 41);
        verticalLayout = new QVBoxLayout(MoreFilmsOption);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MoreFilmsOption);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);


        retranslateUi(MoreFilmsOption);

        QMetaObject::connectSlotsByName(MoreFilmsOption);
    } // setupUi

    void retranslateUi(QWidget *MoreFilmsOption)
    {
        MoreFilmsOption->setWindowTitle(QApplication::translate("MoreFilmsOption", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MoreFilmsOption", "+ More Results!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MoreFilmsOption: public Ui_MoreFilmsOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREFILMSOPTION_H
