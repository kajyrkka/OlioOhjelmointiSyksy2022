#include <iostream>

using namespace std;
struct omaTietue
{
    int luku;
    int table[10];
};
omaTietue omaAliohjelma(omaTietue t);

int main()
{
    int numero;
    int taulukko[10];
    omaTietue tietue;
    for(int i = 0;i<10;i++)
    {
        tietue.table[i]=i;
    }
    omaTietue toinen = omaAliohjelma(tietue);



    cout << "Anna numero valilta 0-10" << endl;
    cin >> numero;

    if(numero < 5)
    {
        cout<<"Numero oli pienempi kuin 5!"<< endl;
        tietue.luku = 5;
        while(tietue.luku > 0)
        {
            tietue.table[tietue.luku] = tietue.luku;
            cout << "Tietueen taulukossa paikassa: "<< tietue.luku << " on luku " << tietue.table[tietue.luku]<<endl;
            tietue.luku--;
        }
    }
    else
    {
        cout<<"Numero oli suurempi tai yhtasuuri kuin 5!"<< endl;
    }

    switch(numero)
    {
        case 0:
            cout<<"Numero on nolla!"<< endl;
            break;

        case 1:
            cout<<"Numero on yksi!"<< endl;

            for(int i = 0;i<10;i++)
            {
                cout << "Aliohjelmassa kaynyt tietue = " << toinen.table[i]<<endl;
            }

            break;

        default:
            cout<<"Numero oli suurempi kuin 1!"<< endl;
            for(numero=0;numero < 10;numero++)
            {
                taulukko[numero] = numero;
            }
            int counter = 9;
            while(counter > 0)
            {
                cout << "Numerot taulukossa ovat:"<< taulukko[counter]<<endl;
                counter--;
            }
    }
    return 0;
}


omaTietue omaAliohjelma(omaTietue t)
{
    for(int i = 0;i<10;i++)
    {
        t.table[i]=i+10;
    }
    return t;
}





5
