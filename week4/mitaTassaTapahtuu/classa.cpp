#include "classa.h"

classA::classA()
{
    cout<<"Class A constructor!"<<endl;
    classBptr = new classB();
}

classA::~classA()
{
    cout<<"Class A destructor!"<<endl;
    delete classBptr;
    classBptr = nullptr;
}

void classA::useAssosiation(classB copyOlio)
{
    copyOlio.someClassBdummyFunction();
}

void classA::useAggegation(classB & referenssiOlioon)
{
    referenssiOlioon.someClassBdummyFunction();

}

void classA::useComposition()
{
    classBptr->someClassBdummyFunction();
}
