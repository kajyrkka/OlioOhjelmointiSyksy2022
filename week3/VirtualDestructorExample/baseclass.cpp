#include "baseclass.h"

BaseClass::BaseClass()
{
    cout<<"BaseClass constructor, allocating dynamically 32 integers"<<endl;
    pointerToIntegerTable = new int[32];
}

BaseClass::~BaseClass()
{
    cout<<"BaseClass destructor, releasing dynamically allocated 32 integers"<<endl;
    delete pointerToIntegerTable;
}
