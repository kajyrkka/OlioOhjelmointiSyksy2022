#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include <iostream>
using namespace std;
#include "baseclass.h"

class DerivedClass:public BaseClass
{
public:
    DerivedClass();
    ~DerivedClass();
    float * pointerToFloatTable;
};

#endif // DERIVEDCLASS_H
