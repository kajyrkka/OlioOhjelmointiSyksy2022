#include "housecontroller.h"

HouseController::HouseController():controlRounds(5)
{
    threshold = 8;
    cout<<"HouseController constructor....."<< endl;
}

void HouseController::control()
{
    while(controlRounds>0)
    {
        controlRounds--;
        // Tehdään tähän sitten seuraava logiikka:
        mittari.measure();
        if(mittari.getInTemp()-mittari.getOutTemp() > threshold)
        {
            lammitin.heat(3.0);
        }

    }
}
