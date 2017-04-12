/********************************************************************************
** Form generated from reading UI file 'ajouterjoueurdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERJOUEURDIALOG_H
#define UI_AJOUTERJOUEURDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AjouterJoueurDialogClass
{
public:
    QPushButton *quitterBouton;

    void setupUi(QDialog *AjouterJoueurDialogClass)
    {
        if (AjouterJoueurDialogClass->objectName().isEmpty())
            AjouterJoueurDialogClass->setObjectName(QString::fromUtf8("AjouterJoueurDialogClass"));
        AjouterJoueurDialogClass->resize(400, 300);
        quitterBouton = new QPushButton(AjouterJoueurDialogClass);
        quitterBouton->setObjectName(QString::fromUtf8("quitterBouton"));
        quitterBouton->setGeometry(QRect(150, 250, 85, 27));

        retranslateUi(AjouterJoueurDialogClass);
        QObject::connect(quitterBouton, SIGNAL(clicked()), AjouterJoueurDialogClass, SLOT(close()));

        QMetaObject::connectSlotsByName(AjouterJoueurDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AjouterJoueurDialogClass)
    {
        AjouterJoueurDialogClass->setWindowTitle(QApplication::translate("AjouterJoueurDialogClass", "AjouterJoueurDialog", 0, QApplication::UnicodeUTF8));
        quitterBouton->setText(QApplication::translate("AjouterJoueurDialogClass", "Quitter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjouterJoueurDialogClass: public Ui_AjouterJoueurDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOUEURDIALOG_H
