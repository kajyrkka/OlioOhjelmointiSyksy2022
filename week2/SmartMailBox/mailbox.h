#ifndef MAILBOX_H
#define MAILBOX_H

#include <iostream>

using namespace std;

class mailbox
{
public:
    mailbox();
    void addPost();
    short takePost();
    void setName(string s);
    string name;
private:
    string address;

    short amount;

};

#endif // MAILBOX_H
