#ifndef AJOUTERJOUEURDIALOG_H
#define AJOUTERJOUEURDIALOG_H

#include <QtGui/QDialog>
#include "ui_ajouterjoueurdialog.h"

class AjouterJoueurDialog : public QDialog
{
    Q_OBJECT

public:
    AjouterJoueurDialog(QWidget *parent = 0);
    ~AjouterJoueurDialog();

private:
    Ui::AjouterJoueurDialogClass ui;
};

#endif // AJOUTERJOUEURDIALOG_H
