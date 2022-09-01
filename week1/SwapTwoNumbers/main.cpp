#include <iostream>

using namespace std;

void swapValues(short * eka, short * toka)
{
    short temp = *eka;
    *eka = *toka;
    *toka = temp;
}

void swapValuesWithReferences(short &eka, short &toka)
{
    short temp = eka;
    eka = toka;
    toka = temp;
}


void swapWithoutPointers(short eka, short toka)
{
    short temp = eka;
    eka = toka;
    toka = temp;
}

int main()
{
    cout << "Let's make a program that changes contents of 2 variables" << endl;

    short a = 11;
    short b = 22;

    short &foo = a;
    short &bar = b;

    cout << "Variables before a change are:\n"<<endl;
    cout<< "Variable a = "<< a << " and variable b = " << b <<endl;

    // Tähän sitten se aliohjelmakutsu, joka vaihtaa muuttujien a ja b sisällön
    //swapValues(&a,&b);
    //swapWithoutPointers(a,b);
    swapValuesWithReferences(foo, bar);

    cout<< "Variables before a change are:\n"<<endl;
    cout<< "Variable a = "<< a << " and variable b = " << b <<endl;

    return 0;
}

// Ja tänne aliohjelman totetutus, joka vaihtaa luvut keskenään.
