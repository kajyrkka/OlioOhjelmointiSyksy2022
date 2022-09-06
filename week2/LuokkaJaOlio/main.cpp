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
    mailbox object1;
    object1.setName("my first object");
    cout << object1.name << endl;
    return 0;
}



mailbox::mailbox()
{
    amount = 10;
    cout<<"mailbox constructor executing.."<<endl;
}

mailbox::~mailbox()
{
    cout<<"mailbox deconstructor executing.."<<endl;
}

void mailbox::setName(string s)
{
    cout<<"mailbox setName function"<<endl;
    name = s;
}

void mailbox::addPost(void)
{

}
void mailbox::takePost(void)
{

}
