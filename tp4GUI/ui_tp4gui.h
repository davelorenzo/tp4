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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ajouterBouton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tp4GUIClass)
    {
        if (tp4GUIClass->objectName().isEmpty())
            tp4GUIClass->setObjectName(QString::fromUtf8("tp4GUIClass"));
        tp4GUIClass->resize(606, 600);
        actionQuitter = new QAction(tp4GUIClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionAjouter = new QAction(tp4GUIClass);
        actionAjouter->setObjectName(QString::fromUtf8("actionAjouter"));
        actionSuprimer = new QAction(tp4GUIClass);
        actionSuprimer->setObjectName(QString::fromUtf8("actionSuprimer"));
        centralwidget = new QWidget(tp4GUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 421, 551));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 3, 0, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(419, -1, 201, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ajouterBouton = new QPushButton(verticalLayoutWidget);
        ajouterBouton->setObjectName(QString::fromUtf8("ajouterBouton"));

        verticalLayout->addWidget(ajouterBouton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tp4GUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tp4GUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 606, 27));
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
        ajouterBouton->setText(QApplication::translate("tp4GUIClass", "Ajouter", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("tp4GUIClass", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tp4GUIClass: public Ui_tp4GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TP4GUI_H
