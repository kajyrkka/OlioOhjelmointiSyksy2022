#include "mittari.h"
#include "mainwindow.h"

mittari::mittari(MainWindow * ptr,QObject *parent) : QObject(parent)
{
    qDebug()<< "mittarin konstruktori";
    plampotilasensori = new lampotilasensori(this);
    connect(this,SIGNAL(readTemperatureSignal()),
            plampotilasensori,SLOT(readTemperatureSlot()));
    connect(plampotilasensori,SIGNAL(temperatureSignal(float)),
            this, SLOT(temperatureSlot(float)));

    pLCD = new LCD(ptr,this);
    connect(this,SIGNAL(printSignal(float)),
            pLCD,SLOT(printSlot(float)),Qt::QueuedConnection);

}

mittari::~mittari()
{
    qDebug()<< "mittarin destruktori";
    //delete plampotilasensori;
    //delete pLCD;
}

void mittari::beginSlot()
{
    qDebug()<< "Vastaanotettiin begin() signaali";
    qDebug()<< "Lahetetaan komento mitata lampotila";
    emit readTemperatureSignal();
}

void mittari::temperatureSlot(float temp)
{
    qDebug()<< "Sain lampotilan lampotilamittarilta ja lahetan sen LCD:lle printattavaksi";
    emit printSignal(temp);
    // Tämän print signaalin voisi kytkeä myös MainWindow:n slottiin....
    qDebug()<<"JOS TÄMÄ TEKSTI TULEE ENNEN SLOT FUNKTION SUORITTAMISTA, NIIN SILLOIN EI KUTSUTTU SLOT FUNTIOTA SUORAAN";
}

void mittari::printOKSlot()
{
    qDebug()<< "Lampotila printattu LCD:n toimesta. Homma hoidettu";

}
