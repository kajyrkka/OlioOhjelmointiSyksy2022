#ifndef MITTARI_H
#define MITTARI_H

#include <QObject>
#include <QDebug>
#include "lampotilasensori.h"
#include "lcd.h"
class MainWindow;

class mittari : public QObject
{
    Q_OBJECT
public:
    explicit mittari(MainWindow * ptr,QObject *parent = nullptr);
    virtual ~mittari();

signals:
    void readTemperatureSignal();
    void printSignal(float);
    void finished();
public slots:
    void beginSlot();
    void temperatureSlot(float);
    void printOKSlot();

private:
    float temperature;
    lampotilasensori * plampotilasensori;
    LCD * pLCD;

};

#endif // MITTARI_H
