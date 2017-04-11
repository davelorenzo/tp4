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
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tp4GUIClass
{
public:
    QAction *actionQuitter;
    QAction *actionAjouter;
    QAction *actionSuprimer;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tp4GUIClass)
    {
        if (tp4GUIClass->objectName().isEmpty())
            tp4GUIClass->setObjectName(QString::fromUtf8("tp4GUIClass"));
        tp4GUIClass->resize(800, 600);
        actionQuitter = new QAction(tp4GUIClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAjouter = new QAction(tp4GUIClass);
        actionAjouter->setObjectName(QString::fromUtf8("actionAjouter"));
        actionSuprimer = new QAction(tp4GUIClass);
        actionSuprimer->setObjectName(QString::fromUtf8("actionSuprimer"));
        centralwidget = new QWidget(tp4GUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 801, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tp4GUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tp4GUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        tp4GUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(tp4GUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tp4GUIClass->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionAjouter);
        menuFichier->addAction(actionSuprimer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);

        retranslateUi(tp4GUIClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), tp4GUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(tp4GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *tp4GUIClass)
    {
        tp4GUIClass->setWindowTitle(QApplication::translate("tp4GUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("tp4GUIClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionAjouter->setText(QApplication::translate("tp4GUIClass", "Ajouter", 0, QApplication::UnicodeUTF8));
        actionSuprimer->setText(QApplication::translate("tp4GUIClass", "Suprimer", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("tp4GUIClass", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tp4GUIClass: public Ui_tp4GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TP4GUI_H
