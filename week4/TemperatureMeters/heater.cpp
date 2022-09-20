#include "heater.h"

Heater::Heater()
{
    cout << "Heater constructor !"<< endl;
}

void Heater::heat(float power)
{
   cout << "Heater heats with power ="<< power << endl;
}
