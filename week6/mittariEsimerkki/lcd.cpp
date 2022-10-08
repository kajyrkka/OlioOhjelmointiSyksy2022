#include "lcd.h"
#include "mainwindow.h"

LCD::LCD(MainWindow * ptr,QObject *parent) : QObject(parent)
{
    qDebug()<< "LCD konstruktori";
    assosiationToMainwindow = ptr;
}

LCD::~LCD()
{
     qDebug()<< "LCD destruktori";
}

void LCD::printSlot(float temp)
{
    qDebug()<< "Saatiin printattavaksi lampotila ="<<temp;
    // miten täältä saadaan kirjoitettua lämpötila UI:lle ????
    // assosiationToMainwindow->print(temp);

}
