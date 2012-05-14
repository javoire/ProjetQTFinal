/********************************************************************************
** Form generated from reading UI file 'filmdisplay.ui'
**
** Created: Mon May 14 01:54:39 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMDISPLAY_H
#define UI_FILMDISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilmDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitle;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *labelRating;
    QLabel *label_3;
    QLabel *labelLength;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *labelYear;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *labelGenre;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonClose;

    void setupUi(QWidget *FilmDisplay)
    {
        if (FilmDisplay->objectName().isEmpty())
            FilmDisplay->setObjectName(QString::fromUtf8("FilmDisplay"));
        FilmDisplay->resize(592, 210);
        verticalLayout = new QVBoxLayout(FilmDisplay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTitle = new QLabel(FilmDisplay);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setStyleSheet(QString::fromUtf8("font:bold 23pt \"Helvetica\";"));

        horizontalLayout->addWidget(labelTitle);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        line = new QFrame(FilmDisplay);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FilmDisplay);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        labelRating = new QLabel(FilmDisplay);
        labelRating->setObjectName(QString::fromUtf8("labelRating"));
        labelRating->setStyleSheet(QString::fromUtf8("font:bold 12pt \"Helvetica\";"));

        gridLayout->addWidget(labelRating, 0, 1, 1, 1);

        label_3 = new QLabel(FilmDisplay);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        labelLength = new QLabel(FilmDisplay);
        labelLength->setObjectName(QString::fromUtf8("labelLength"));
        labelLength->setStyleSheet(QString::fromUtf8("font:bold 12pt \"Helvetica\";"));

        gridLayout->addWidget(labelLength, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 6, 1, 1);

        label_4 = new QLabel(FilmDisplay);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        labelYear = new QLabel(FilmDisplay);
        labelYear->setObjectName(QString::fromUtf8("labelYear"));
        labelYear->setStyleSheet(QString::fromUtf8("font:bold 12pt \"Helvetica\";"));

        gridLayout->addWidget(labelYear, 0, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        line_2 = new QFrame(FilmDisplay);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(FilmDisplay);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        labelGenre = new QLabel(FilmDisplay);
        labelGenre->setObjectName(QString::fromUtf8("labelGenre"));
        labelGenre->setStyleSheet(QString::fromUtf8("font:bold 12pt \"Helvetica\";"));

        gridLayout_2->addWidget(labelGenre, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        line_3 = new QFrame(FilmDisplay);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        buttonClose = new QPushButton(FilmDisplay);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));

        horizontalLayout_5->addWidget(buttonClose);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(FilmDisplay);

        QMetaObject::connectSlotsByName(FilmDisplay);
    } // setupUi

    void retranslateUi(QWidget *FilmDisplay)
    {
        FilmDisplay->setWindowTitle(QApplication::translate("FilmDisplay", "Form", 0, QApplication::UnicodeUTF8));
        labelTitle->setText(QApplication::translate("FilmDisplay", "Title", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FilmDisplay", "Rating:", 0, QApplication::UnicodeUTF8));
        labelRating->setText(QApplication::translate("FilmDisplay", "5", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FilmDisplay", "Length:", 0, QApplication::UnicodeUTF8));
        labelLength->setText(QApplication::translate("FilmDisplay", "120 min", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FilmDisplay", "Year:", 0, QApplication::UnicodeUTF8));
        labelYear->setText(QApplication::translate("FilmDisplay", "1998", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FilmDisplay", "Genre:", 0, QApplication::UnicodeUTF8));
        labelGenre->setText(QApplication::translate("FilmDisplay", "Horror, Drama, Comedy, Adult", 0, QApplication::UnicodeUTF8));
        buttonClose->setText(QApplication::translate("FilmDisplay", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FilmDisplay: public Ui_FilmDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMDISPLAY_H
