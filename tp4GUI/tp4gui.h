#ifndef TP4GUI_H
#define TP4GUI_H

#include <QtGui/QMainWindow>
#include "ui_tp4gui.h"
#include "Annuaire.h"
#include <string>

class tp4GUI : public QMainWindow
{
    Q_OBJECT

public:
    tp4GUI(QWidget *parent = 0);
    ~tp4GUI();

private:
    //tp::Annuaire m_club;
    Ui::tp4GUIClass ui;
};

#endif // TP4GUI_H
