#include "finemeter.h"




FineMeter::FineMeter()
{
    cout << "FineMeter constructor !"<< endl;
    measure();
    maxInTemp = inTemp;
    minInTemp = inTemp;
    maxOutTemp = outTemp;
    minOutTemp = outTemp;
}

void FineMeter::measureAndUpdateMinMax()
{
    measure();
    if(inTemp>maxInTemp)
    {
        maxInTemp = inTemp;
    }
    if(inTemp<minInTemp)
    {
        minInTemp = inTemp;
    }
}

void FineMeter::showTemp()
{
    cout << "In Temperature = "<< inTemp << endl;
    cout << "Max in Temp = " << maxInTemp << "Min in Temp =" << minInTemp<<endl;
    cout << endl;
    cout << "Out Temperature = "<< outTemp << endl;
    cout << "Max out Temp = " << maxOutTemp << "Min out Temp =" << minOutTemp<<endl;

}

float FineMeter::getInTemp()
{
    return inTemp;
}

float FineMeter::getOutTemp()
{
    return outTemp;
}
