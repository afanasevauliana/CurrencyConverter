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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBoxFrom;
    QComboBox *comboBoxTo;
    QLineEdit *lineEditAmount;
    QPushButton *pushButtonConvert;
    QLabel *labelResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(666, 485);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBoxFrom = new QComboBox(centralwidget);
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->setObjectName(QString::fromUtf8("comboBoxFrom"));
        comboBoxFrom->setGeometry(QRect(240, 40, 181, 51));
        comboBoxFrom->setStyleSheet(QString::fromUtf8("font: 63 25pt \"Yu Gothic UI Semibold\";"));
        comboBoxTo = new QComboBox(centralwidget);
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->setObjectName(QString::fromUtf8("comboBoxTo"));
        comboBoxTo->setGeometry(QRect(240, 120, 181, 51));
        comboBoxTo->setStyleSheet(QString::fromUtf8("font: 63 25pt \"Yu Gothic UI Semibold\";"));
        lineEditAmount = new QLineEdit(centralwidget);
        lineEditAmount->setObjectName(QString::fromUtf8("lineEditAmount"));
        lineEditAmount->setGeometry(QRect(240, 190, 181, 41));
        pushButtonConvert = new QPushButton(centralwidget);
        pushButtonConvert->setObjectName(QString::fromUtf8("pushButtonConvert"));
        pushButtonConvert->setGeometry(QRect(240, 250, 181, 41));
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setGeometry(QRect(260, 310, 141, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 666, 26));
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
        comboBoxFrom->setItemText(0, QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\273\320\260\321\200", nullptr));
        comboBoxFrom->setItemText(1, QApplication::translate("MainWindow", "\320\240\321\203\320\261\320\273\321\214", nullptr));
        comboBoxFrom->setItemText(2, QApplication::translate("MainWindow", "\320\225\320\262\321\200\320\276", nullptr));
        comboBoxFrom->setItemText(3, QApplication::translate("MainWindow", "\320\244\321\203\320\275\321\202", nullptr));
        comboBoxFrom->setItemText(4, QApplication::translate("MainWindow", "\320\244\321\200\320\260\320\275\320\272", nullptr));

        comboBoxTo->setItemText(0, QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\273\320\260\321\200", nullptr));
        comboBoxTo->setItemText(1, QApplication::translate("MainWindow", "\320\240\321\203\320\261\320\273\321\214", nullptr));
        comboBoxTo->setItemText(2, QApplication::translate("MainWindow", "\320\225\320\262\321\200\320\276", nullptr));
        comboBoxTo->setItemText(3, QApplication::translate("MainWindow", "\320\244\321\203\320\275\321\202", nullptr));
        comboBoxTo->setItemText(4, QApplication::translate("MainWindow", "\320\244\321\200\320\260\320\275\320\272", nullptr));

        pushButtonConvert->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        labelResult->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
