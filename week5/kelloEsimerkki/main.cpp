#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QObject::connect(&w, SIGNAL(stopProgram()), // tässäkin esimerkki staattisesta fkt:sta
            &a, SLOT(quit()));

    w.show();
    short returnValue = a.exec();
    return returnValue;

}
