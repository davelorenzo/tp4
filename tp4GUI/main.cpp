#include "tp4gui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tp4GUI w;
    w.show();
    return a.exec();
}
