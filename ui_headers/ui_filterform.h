/********************************************************************************
** Form generated from reading UI file 'filterform.ui'
**
** Created: Mon May 14 01:54:39 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERFORM_H
#define UI_FILTERFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterForm
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout_3;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_12;
    QProgressBar *filmListProgressBar;
    QScrollArea *filmListScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *filmListLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QWidget *filmSpaceWidget;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *filmSpaceLayout;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *titel;
    QLabel *titel_2;
    QFrame *line;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *titleLabel;
    QFrame *line_2;
    QWidget *widget_3;
    QFrame *frame;
    QLineEdit *titleInput;
    QVBoxLayout *yearSliderLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelYearMin;
    QLabel *fromto;
    QLabel *labelYearMax;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *checkBoxesLeft;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *checkBoxesRight;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FilterForm)
    {
        if (FilterForm->objectName().isEmpty())
            FilterForm->setObjectName(QString::fromUtf8("FilterForm"));
        FilterForm->resize(1681, 654);
        centralwidget = new QWidget(FilterForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_7 = new QHBoxLayout(centralwidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(700, 23));
        textBrowser->setMaximumSize(QSize(16777215, 23));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_3->addWidget(textBrowser, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        filmListProgressBar = new QProgressBar(centralwidget);
        filmListProgressBar->setObjectName(QString::fromUtf8("filmListProgressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filmListProgressBar->sizePolicy().hasHeightForWidth());
        filmListProgressBar->setSizePolicy(sizePolicy);
        filmListProgressBar->setValue(24);

        verticalLayout_12->addWidget(filmListProgressBar);

        filmListScrollArea = new QScrollArea(centralwidget);
        filmListScrollArea->setObjectName(QString::fromUtf8("filmListScrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filmListScrollArea->sizePolicy().hasHeightForWidth());
        filmListScrollArea->setSizePolicy(sizePolicy1);
        filmListScrollArea->setMinimumSize(QSize(200, 500));
        filmListScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 198, 521));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_6 = new QWidget(scrollAreaWidgetContents);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy2);
        verticalLayout_10 = new QVBoxLayout(widget_6);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 5);
        filmListLayout_2 = new QVBoxLayout();
        filmListLayout_2->setObjectName(QString::fromUtf8("filmListLayout_2"));

        verticalLayout_10->addLayout(filmListLayout_2);


        verticalLayout_6->addWidget(widget_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_8->addLayout(verticalLayout_6);

        filmListScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_12->addWidget(filmListScrollArea);


        horizontalLayout_5->addLayout(verticalLayout_12);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        filmSpaceWidget = new QWidget(centralwidget);
        filmSpaceWidget->setObjectName(QString::fromUtf8("filmSpaceWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(filmSpaceWidget->sizePolicy().hasHeightForWidth());
        filmSpaceWidget->setSizePolicy(sizePolicy3);
        filmSpaceWidget->setMinimumSize(QSize(500, 500));
        filmSpaceWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));
        verticalLayout_14 = new QVBoxLayout(filmSpaceWidget);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        filmSpaceLayout = new QVBoxLayout();
        filmSpaceLayout->setObjectName(QString::fromUtf8("filmSpaceLayout"));
        filmSpaceLayout->setSizeConstraint(QLayout::SetMaximumSize);

        verticalLayout_14->addLayout(filmSpaceLayout);


        verticalLayout->addWidget(filmSpaceWidget);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        titel = new QLabel(centralwidget);
        titel->setObjectName(QString::fromUtf8("titel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(titel->sizePolicy().hasHeightForWidth());
        titel->setSizePolicy(sizePolicy4);
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        titel->setFont(font);
        titel->setStyleSheet(QString::fromUtf8("font: oblique bold 16pt \"Helvetica\";"));
        titel->setScaledContents(false);
        titel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(titel, 0, 0, 1, 1);

        titel_2 = new QLabel(centralwidget);
        titel_2->setObjectName(QString::fromUtf8("titel_2"));
        sizePolicy4.setHeightForWidth(titel_2->sizePolicy().hasHeightForWidth());
        titel_2->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Helvetica"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        titel_2->setFont(font1);
        titel_2->setStyleSheet(QString::fromUtf8("font: oblique 8pt \"Helvetica\";"));
        titel_2->setScaledContents(false);
        titel_2->setAlignment(Qt::AlignCenter);
        titel_2->setWordWrap(true);

        gridLayout_2->addWidget(titel_2, 2, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy5);
        titleLabel->setStyleSheet(QString::fromUtf8("font:oblique 8pt \"Myriad Pro\";"));

        gridLayout->addWidget(titleLabel, 0, 0, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        verticalLayout_3->addWidget(widget_3);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy6);
        frame->setMinimumSize(QSize(201, 31));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        titleInput = new QLineEdit(frame);
        titleInput->setObjectName(QString::fromUtf8("titleInput"));
        titleInput->setEnabled(true);
        titleInput->setGeometry(QRect(0, 0, 201, 31));
        sizePolicy6.setHeightForWidth(titleInput->sizePolicy().hasHeightForWidth());
        titleInput->setSizePolicy(sizePolicy6);
        titleInput->setMinimumSize(QSize(201, 31));
        titleInput->setMaximumSize(QSize(16777215, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Myriad Pro"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        titleInput->setFont(font2);
        titleInput->setAutoFillBackground(false);
        titleInput->setStyleSheet(QString::fromUtf8("font: italic 20pt \"Myriad Pro\";\n"
"color: rgb(88, 88, 88);\n"
"background-color: rgb(252, 252, 252, 0);\n"
"border-color: rgb(107, 107, 107);"));
        titleInput->setFrame(false);

        verticalLayout_3->addWidget(frame);

        yearSliderLayout = new QVBoxLayout();
        yearSliderLayout->setSpacing(2);
        yearSliderLayout->setObjectName(QString::fromUtf8("yearSliderLayout"));
        yearSliderLayout->setSizeConstraint(QLayout::SetFixedSize);
        yearSliderLayout->setContentsMargins(0, 0, -1, -1);

        verticalLayout_3->addLayout(yearSliderLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelYearMin = new QLabel(centralwidget);
        labelYearMin->setObjectName(QString::fromUtf8("labelYearMin"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Myriad Pro"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        labelYearMin->setFont(font3);
        labelYearMin->setStyleSheet(QString::fromUtf8("font: italic 9pt \"Myriad Pro\";\n"
"color: rgb(88, 88, 88);"));

        horizontalLayout->addWidget(labelYearMin);

        fromto = new QLabel(centralwidget);
        fromto->setObjectName(QString::fromUtf8("fromto"));
        fromto->setLayoutDirection(Qt::RightToLeft);
        fromto->setAutoFillBackground(false);
        fromto->setStyleSheet(QString::fromUtf8("font: italic 9pt \"Myriad Pro\";\n"
"color: rgb(88, 88, 88);"));
        fromto->setTextFormat(Qt::RichText);
        fromto->setScaledContents(false);
        fromto->setAlignment(Qt::AlignCenter);
        fromto->setMargin(0);
        fromto->setOpenExternalLinks(false);

        horizontalLayout->addWidget(fromto);

        labelYearMax = new QLabel(centralwidget);
        labelYearMax->setObjectName(QString::fromUtf8("labelYearMax"));
        labelYearMax->setLayoutDirection(Qt::RightToLeft);
        labelYearMax->setAutoFillBackground(false);
        labelYearMax->setStyleSheet(QString::fromUtf8("font: italic 9pt \"Myriad Pro\";\n"
"color: rgb(88, 88, 88);"));
        labelYearMax->setTextFormat(Qt::RichText);
        labelYearMax->setScaledContents(false);
        labelYearMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelYearMax->setMargin(0);
        labelYearMax->setOpenExternalLinks(false);

        horizontalLayout->addWidget(labelYearMax);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 250));
        widget->setMaximumSize(QSize(16777215, 250));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxesLeft = new QVBoxLayout();
        checkBoxesLeft->setObjectName(QString::fromUtf8("checkBoxesLeft"));

        verticalLayout_2->addLayout(checkBoxesLeft);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 250));
        widget_2->setMaximumSize(QSize(16777215, 250));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBoxesRight = new QVBoxLayout();
        checkBoxesRight->setObjectName(QString::fromUtf8("checkBoxesRight"));

        verticalLayout_4->addLayout(checkBoxesRight);


        horizontalLayout_2->addWidget(widget_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_3);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_3);

        FilterForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FilterForm);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1681, 25));
        FilterForm->setMenuBar(menubar);
        statusbar = new QStatusBar(FilterForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FilterForm->setStatusBar(statusbar);

        retranslateUi(FilterForm);

        QMetaObject::connectSlotsByName(FilterForm);
    } // setupUi

    void retranslateUi(QMainWindow *FilterForm)
    {
        FilterForm->setWindowTitle(QApplication::translate("FilterForm", "MainWindow", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("FilterForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Myriad Pro'; font-style:italic;\">Developed by: Alan Ferreir\303\263s, Mauricio Takecita Uehara, Jonatan Dahl - \302\2512012 Paris, France</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        titel->setText(QApplication::translate("FilterForm", "TheFilmUniverse", 0, QApplication::UnicodeUTF8));
        titel_2->setText(QApplication::translate("FilterForm", "Use the fields below to find the perfect film to see tonight", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("FilterForm", "title", 0, QApplication::UnicodeUTF8));
        titleInput->setProperty("placeholderText", QVariant(QApplication::translate("FilterForm", "Title...", 0, QApplication::UnicodeUTF8)));
        labelYearMin->setText(QApplication::translate("FilterForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        fromto->setText(QApplication::translate("FilterForm", "from - to", 0, QApplication::UnicodeUTF8));
        labelYearMax->setText(QApplication::translate("FilterForm", "TextLabel ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FilterForm: public Ui_FilterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERFORM_H
