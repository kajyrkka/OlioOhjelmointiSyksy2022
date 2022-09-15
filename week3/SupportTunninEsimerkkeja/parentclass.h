#ifndef PARENTCLASS_H
#define PARENTCLASS_H
#include <iostream>
using namespace std;


class ParentClass
{
public:
    ParentClass(string);
    void setParentName(string);
    string getParentName();

protected:
    string ParentName;
};

#endif // PARENTCLASS_H
