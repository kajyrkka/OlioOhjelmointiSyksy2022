#include <iostream>
using namespace std;
#include "baseclass.h"
#include "derivedclass.h"

int main()
{
    cout<<"luodaan ensin BaseClass olio ja tuhotaan se saman tien"<<endl;

    BaseClass * pointerToBaseClass = new(BaseClass);
    delete pointerToBaseClass;
    cout<<endl;

    cout<<"Ja sitten DerivedClass olio ja tuhotaan sekin saman tien"<<endl;
    DerivedClass * pointerToDerivedClass = new(DerivedClass);
    delete pointerToDerivedClass;
    cout<<endl;

    cout<<"Lopuksi luodaan BaseClass pointteri, johon sijoitetaan Derived "<<endl;
    BaseClass * ptr = new(DerivedClass);
    delete ptr;



    return 0;
}
