#include "childclass.h"

ChildClass::ChildClass(string father,string son ):ParentClass(father),childName(son)
{
  //  childName = s;
}

string ChildClass::getChildName()
{
    return childName;
}

void ChildClass::setChildName(string s)
{
     childName = s;
}
