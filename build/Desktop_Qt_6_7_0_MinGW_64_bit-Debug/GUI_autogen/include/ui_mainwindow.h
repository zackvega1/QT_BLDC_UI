/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBoxChoices;
    QLabel *centerText;
    QLabel *currentValue;
    QLineEdit *targetSet;
    QLabel *background;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        comboBoxChoices = new QComboBox(centralwidget);
        comboBoxChoices->addItem(QString());
        comboBoxChoices->addItem(QString());
        comboBoxChoices->addItem(QString());
        comboBoxChoices->setObjectName("comboBoxChoices");
        comboBoxChoices->setGeometry(QRect(310, 400, 71, 31));
        comboBoxChoices->setAutoFillBackground(true);
        comboBoxChoices->setEditable(false);
        centerText = new QLabel(centralwidget);
        centerText->setObjectName("centerText");
        centerText->setGeometry(QRect(280, 240, 171, 131));
        QFont font;
        font.setPointSize(52);
        centerText->setFont(font);
        centerText->setAlignment(Qt::AlignCenter);
        currentValue = new QLabel(centralwidget);
        currentValue->setObjectName("currentValue");
        currentValue->setGeometry(QRect(310, 180, 331, 31));
        QFont font1;
        font1.setPointSize(18);
        currentValue->setFont(font1);
        targetSet = new QLineEdit(centralwidget);
        targetSet->setObjectName("targetSet");
        targetSet->setGeometry(QRect(310, 380, 113, 22));
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(20, 30, 741, 511));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        comboBoxChoices->raise();
        centerText->raise();
        currentValue->raise();
        targetSet->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBoxChoices->setItemText(0, QCoreApplication::translate("MainWindow", "Torque", nullptr));
        comboBoxChoices->setItemText(1, QCoreApplication::translate("MainWindow", "Velocity", nullptr));
        comboBoxChoices->setItemText(2, QCoreApplication::translate("MainWindow", "Angle", nullptr));

        comboBoxChoices->setCurrentText(QCoreApplication::translate("MainWindow", "Torque", nullptr));
        centerText->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        currentValue->setText(QCoreApplication::translate("MainWindow", "Current: ", nullptr));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
