#ifndef CLASSA_H
#define CLASSA_H
#include <iostream>
using namespace std;

#include "classb.h"

class classA
{
public:
    classA();
    ~classA();
    void useAssosiation(classB);
    void useAggegation(classB &);
    void useComposition();

private:
    classB * classBptr;

};

#endif // CLASSA_H
