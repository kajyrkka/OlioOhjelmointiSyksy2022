#include "myclass.h"

myClass::myClass(string s)
{
    cout << "MyClass constructor, reserved from "<< s <<endl;
}

void myClass::myTestFunction()
{
    cout << "MyClass myTestFunction() "<<endl;
}
