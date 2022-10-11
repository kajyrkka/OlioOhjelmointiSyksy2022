#include "myclass.h"


myClass::myClass()
{
    pQTimer = new QTimer(this);
    this->start();
    pQTimer->start(1000);
}

myClass::~myClass()
{
    delete pQTimer;
}

void myClass::run()
{
    for(int i = 0;i<10;i++)
    {
      emit this->sendTick();
    }
}
