#include "lampotilasensori.h"

lampotilasensori::lampotilasensori(QObject *parent) : QObject(parent)
{
    qDebug()<< "lampotilasensorin konstruktori";
}

lampotilasensori::~lampotilasensori()
{
    qDebug()<< "lampotilasensorin destruktori";

}

void lampotilasensori::readTemperatureSlot()
{
    qDebug()<< "vastaanotettiin kasky lukea lampotila";
    temperature = 9.4;
    qDebug()<<"Lahetettiin temperature arvo mittarille";
    emit temperatureSignal(temperature);


}
