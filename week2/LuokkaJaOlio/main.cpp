#include <iostream>

using namespace std;

class mailbox
{
public:

    mailbox();
    ~mailbox();
    string address;
    string name;
    void addPost();
    void takePost();
    void setName(string s);
private:
    short amount;

};



int main()
{
    mailbox obj;
    return 0;
}



mailbox::mailbox()
{
    cout<<"mailbox constructor executing.."<<endl;
}

mailbox::~mailbox()
{
    cout<<"mailbox deconstructor executing.."<<endl;
}

