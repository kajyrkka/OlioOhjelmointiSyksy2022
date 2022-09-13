#include "basicmeter.h"

BasicMeter::BasicMeter()
{
    cout << "BasicMeter constructor !"<< endl;
}

BasicMeter::~BasicMeter()
{
    cout << "BasicMeter destructor !"<< endl;
}

void BasicMeter::measure()
{
    srand(std::time(0));
    inTemp = (rand()%10)+10;
    outTemp = (rand()%10)-10;

}

void BasicMeter::showTemp()
{
     cout << "In Temperature = "<< inTemp << endl;
     cout << "Out Temperature = "<< outTemp << endl;
}
