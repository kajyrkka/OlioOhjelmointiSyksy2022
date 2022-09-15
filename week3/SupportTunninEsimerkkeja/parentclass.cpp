#include "parentclass.h"

ParentClass::ParentClass(string s)
{
    ParentName = s;
}

void ParentClass::setParentName(string s)
{
    ParentName = s;
}

string ParentClass::getParentName()
{
    return ParentName;
}
