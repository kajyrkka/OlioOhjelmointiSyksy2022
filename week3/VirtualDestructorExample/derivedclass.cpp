#include "derivedclass.h"

DerivedClass::DerivedClass()
{
    cout<<"DerivedClass constructor, allocating dynamically 32 floats "<<endl;
    pointerToFloatTable = new float[32];
}

DerivedClass::~DerivedClass()
{
    cout<<"DerivedClass destructor, releasing dynamically allocated 32 floats"<<endl;
    delete pointerToFloatTable;
}

