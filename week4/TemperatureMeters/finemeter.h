#ifndef FINEMETER_H
#define FINEMETER_H
#include "basicmeter.h"
#include <iostream>
using namespace std;

class FineMeter : public BasicMeter
{
public:
    FineMeter();
    void measureAndUpdateMinMax();
    virtual void showTemp() override;
    float getInTemp();
    float getOutTemp();

private:
    float maxInTemp,minInTemp;
    float maxOutTemp,minOutTemp;
};

#endif // FINEMETER_H
