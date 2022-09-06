#include <iostream>

using namespace std;
#include "mailbox.h"
#include "smartbox.h"

int main()
{
    mailbox laatikko1;
    smartBox laatikko2;

    laatikko2.setName("Laatikko2");
    cout<< laatikko2.name<<endl;
    laatikko2.makeAlarm();
    cout<< laatikko2.laatikko3.name<<endl;


    return 0;
}
