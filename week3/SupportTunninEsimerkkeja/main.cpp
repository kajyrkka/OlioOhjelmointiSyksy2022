#include <iostream>
using namespace std;

#include "childclass.h"

int main()
{

    ChildClass child("isa","poika");
    cout<<"Pojan nimi = "<<child.getChildName()<<endl;
    cout<<endl;
    cout<<"Pojan isan nimi = " << child.getParentName()<<endl;


    return 0;
}
