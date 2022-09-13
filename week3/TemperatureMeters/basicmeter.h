#ifndef BASICMETER_H
#define BASICMETER_H
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>


class BasicMeter
{
public:
    BasicMeter();
    ~BasicMeter();
    void measure();
    virtual void showTemp();

protected:
    float inTemp;
    float outTemp;
};

#endif // BASICMETER_H
