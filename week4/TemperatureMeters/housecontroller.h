#ifndef HOUSECONTROLLER_H
#define HOUSECONTROLLER_H
#include <iostream>
using namespace std;
#include "finemeter.h"
#include "heater.h"

class HouseController
{
public:
    HouseController();
    // control funktio voisi sitten while luupissa
    // pyöriä controlRounds kertaa ja joka kerta:
    //   mitataan FineMeter luokan metodien avulla sisä ja ulkolämpötila
    //   Jos sisä ja ulkolämpötilan ero > threshold, niin käytetään
    //   Heater luokan heat(float) funktiota lämmittämiseen.
    void control(void);
private:
    // Alustetaan nämä kaksi muuttujaa HouseController konstruktorissa
    // tai jopa ennen sitä
    int controlRounds;
    float threshold;
    FineMeter mittari;
    Heater lammitin;
};

#endif // HOUSECONTROLLER_H
