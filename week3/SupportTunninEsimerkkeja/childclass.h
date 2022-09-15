#ifndef CHILDCLASS_H
#define CHILDCLASS_H
#include <iostream>
using namespace std;
#include "parentclass.h"

class ChildClass:public ParentClass
{
public:
    ChildClass(string,string);
    string getChildName(void);
    void setChildName(string); // tämäkin saattaa hämätä, että tässä vaiheessa
                               // parametriä ei tarvitse määrittää
                               // mutta *.CPP tiedoston puolella kyllä.
private:
    string childName;
};

#endif // CHILDCLASS_H
