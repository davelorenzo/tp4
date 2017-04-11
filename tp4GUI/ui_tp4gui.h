/********************************************************************************
** Form generated from reading UI file 'tp4gui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TP4GUI_H
#define UI_TP4GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tp4GUIClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tp4GUIClass)
    {
        if (tp4GUIClass->objectName().isEmpty())
            tp4GUIClass->setObjectName(QString::fromUtf8("tp4GUIClass"));
        tp4GUIClass->resize(800, 600);
        centralwidget = new QWidget(tp4GUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tp4GUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tp4GUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        tp4GUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(tp4GUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tp4GUIClass->setStatusBar(statusbar);

        retranslateUi(tp4GUIClass);

        QMetaObject::connectSlotsByName(tp4GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *tp4GUIClass)
    {
        tp4GUIClass->setWindowTitle(QApplication::translate("tp4GUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tp4GUIClass: public Ui_tp4GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TP4GUI_H
