#include <iostream>
using namespace std;

#include "myclass.h"

int main()
{
    myClass olioPinosta("pinosta");
    olioPinosta.myTestFunction();

    myClass * pointerTomyClass;
    pointerTomyClass = new myClass("heapista");
    pointerTomyClass->myTestFunction();

    // Eli miksi olion metodeja käytetään joko . operaation tai -> operaation
    // kautta???

    delete pointerTomyClass;
    return 0;
}
