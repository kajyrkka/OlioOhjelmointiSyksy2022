#include <iostream>
using namespace std;
#include "basicmeter.h"
#include "finemeter.h"

int main()
{
    BasicMeter mittari1;
    mittari1.measure();
    mittari1.showTemp();

    FineMeter mittari2;
    mittari2.measureAndUpdateMinMax();
    mittari2.showTemp();

    cout<<"ja viela lopuksi peritylla showTemp metodilla"<<endl;
    mittari2.BasicMeter::showTemp();



    return 0;
}
