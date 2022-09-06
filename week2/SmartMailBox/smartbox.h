#ifndef SMARTBOX_H
#define SMARTBOX_H
#include <iostream>
#include "mailbox.h"

using namespace std;

class smartBox : public mailbox
{
public:
    smartBox();
    void makeAlarm();
    mailbox laatikko3;
private:
    short maxAmount;
    float lightAmount;
    string mailAddress;

};

#endif // SMARTBOX_H

