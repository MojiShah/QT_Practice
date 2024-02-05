/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QRadioButton *yesRadioButton;
    QRadioButton *noRadioButton;
    QPushButton *btnFavorite;
    QGroupBox *groupBox_3;
    QPushButton *btnProgram;
    QCheckBox *cplusCheckBox;
    QCheckBox *pythonCheckBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(681, 356);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 80, 181, 171));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 40, 95, 20));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 90, 95, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 120, 93, 28));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 181, 171));
        yesRadioButton = new QRadioButton(groupBox_2);
        yesRadioButton->setObjectName(QString::fromUtf8("yesRadioButton"));
        yesRadioButton->setGeometry(QRect(10, 40, 95, 20));
        noRadioButton = new QRadioButton(groupBox_2);
        noRadioButton->setObjectName(QString::fromUtf8("noRadioButton"));
        noRadioButton->setGeometry(QRect(10, 90, 95, 20));
        btnFavorite = new QPushButton(groupBox_2);
        btnFavorite->setObjectName(QString::fromUtf8("btnFavorite"));
        btnFavorite->setGeometry(QRect(50, 120, 93, 28));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(350, 80, 181, 171));
        btnProgram = new QPushButton(groupBox_3);
        btnProgram->setObjectName(QString::fromUtf8("btnProgram"));
        btnProgram->setGeometry(QRect(30, 120, 111, 28));
        cplusCheckBox = new QCheckBox(groupBox_3);
        cplusCheckBox->setObjectName(QString::fromUtf8("cplusCheckBox"));
        cplusCheckBox->setGeometry(QRect(20, 40, 81, 20));
        pythonCheckBox = new QCheckBox(groupBox_3);
        pythonCheckBox->setObjectName(QString::fromUtf8("pythonCheckBox"));
        pythonCheckBox->setGeometry(QRect(20, 80, 81, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 681, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Radio Button", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Yes", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "No", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Radio Button", nullptr));
        yesRadioButton->setText(QApplication::translate("MainWindow", "Yes", nullptr));
        noRadioButton->setText(QApplication::translate("MainWindow", "No", nullptr));
        btnFavorite->setText(QApplication::translate("MainWindow", "favorite", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Check Box", nullptr));
        btnProgram->setText(QApplication::translate("MainWindow", "which Program", nullptr));
        cplusCheckBox->setText(QApplication::translate("MainWindow", "C++", nullptr));
        pythonCheckBox->setText(QApplication::translate("MainWindow", "Python", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
