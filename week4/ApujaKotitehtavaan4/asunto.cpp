#include "asunto.h"

asunto::asunto()
{
    cout<<"Asunto luotu"<<endl;
    //maarita(2,100);
}

void asunto::maarita(int a, int n)   // a = asukasmaara, n = neliot
{
    asukasMaara = a;
    neliot = n;
}

double asunto::laskeKulutus(double p)  // p = price
{
    return asukasMaara*neliot*p;
}
