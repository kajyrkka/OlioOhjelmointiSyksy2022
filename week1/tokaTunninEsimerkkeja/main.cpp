#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

short askFromUser(void);

int main()
{


    // 1. Arvotaan satunnainen luku
    srand(time(0));
    short randomValue = rand();

    bool stayInLoop = true;

    while(stayInLoop == true)
    {

    // 2. Kysytään pelaajalta arvaus
        short userValue = askFromUser();


    // 3. Tarkistetaan onko arvaus pienenpi, suurempi tai yhtäsuuri kuin luku
        if(randomValue == userValue)
        {
            stayInLoop = false;
        }
        else if(randomValue<userValue)
        {

        }
        else if(randomValue>userValue)
        {

        }



    // 4. Kerrotaan tarkistuksen tulos tyyliin: "luku on pienempi/suurempi" tai oikea


    // 5.  jos pelaajan vastaus ei ollut oikein niin palataan kohtaan 2

    }


    for(int i = 0;i<10;i++)
    {
        cout << "Time(0) palauttaa arvon = "<< time(0)<< endl;
        cout << "arvottu luku = " << rand()%askFromUser() << endl;
    }
    //cout << "Hello World!" << endl;
    return 0;
}

short askFromUser(void)
{
    short maxluku = 0;
    cout << "anna luku "<<endl;
    cin>>maxluku;
    return maxluku;
}
