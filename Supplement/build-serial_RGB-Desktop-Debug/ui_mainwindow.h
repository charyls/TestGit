/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *bluelabel;
    QLabel *redlabel;
    QLabel *greenlabel;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QSlider *redslider;
    QSlider *greenslider;
    QSlider *blueslider;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLabel *redvaluelabel;
    QLabel *greenvaluelabel;
    QLabel *bluevaluelabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(560, 280);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 111, 161));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bluelabel = new QLabel(widget);
        bluelabel->setObjectName(QStringLiteral("bluelabel"));
        bluelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(bluelabel, 2, 0, 1, 1);

        redlabel = new QLabel(widget);
        redlabel->setObjectName(QStringLiteral("redlabel"));
        redlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(redlabel, 0, 0, 1, 1);

        greenlabel = new QLabel(widget);
        greenlabel->setObjectName(QStringLiteral("greenlabel"));
        greenlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(greenlabel, 1, 0, 1, 1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(170, 30, 261, 171));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        redslider = new QSlider(widget1);
        redslider->setObjectName(QStringLiteral("redslider"));
        redslider->setMaximum(255);
        redslider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(redslider, 0, 0, 1, 1);

        greenslider = new QSlider(widget1);
        greenslider->setObjectName(QStringLiteral("greenslider"));
        greenslider->setMaximum(255);
        greenslider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(greenslider, 1, 0, 1, 1);

        blueslider = new QSlider(widget1);
        blueslider->setObjectName(QStringLiteral("blueslider"));
        blueslider->setMaximum(255);
        blueslider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(blueslider, 2, 0, 1, 1);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(450, 30, 81, 161));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        redvaluelabel = new QLabel(widget2);
        redvaluelabel->setObjectName(QStringLiteral("redvaluelabel"));
        redvaluelabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(redvaluelabel, 0, 0, 1, 1);

        greenvaluelabel = new QLabel(widget2);
        greenvaluelabel->setObjectName(QStringLiteral("greenvaluelabel"));

        gridLayout_3->addWidget(greenvaluelabel, 1, 0, 1, 1);

        bluevaluelabel = new QLabel(widget2);
        bluevaluelabel->setObjectName(QStringLiteral("bluevaluelabel"));

        gridLayout_3->addWidget(bluevaluelabel, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        bluelabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#0055ff;\">Blue led</span></p></body></html>", 0));
        redlabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#ff0000;\">Red led</span></p></body></html>", 0));
        greenlabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#55ff00;\">Green led</span></p></body></html>", 0));
        redvaluelabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">0</span></p></body></html>", 0));
        greenvaluelabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">0</span></p></body></html>", 0));
        bluevaluelabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">0</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
