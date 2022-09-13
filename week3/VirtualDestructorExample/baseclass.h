#ifndef BASECLASS_H
#define BASECLASS_H
#include <iostream>

using namespace std;

class BaseClass
{
public:
    BaseClass();
    virtual ~BaseClass(); //HOX eli jos tämä peritään, niin tämän tyypin "päälle" voi
                  //sijoittaa perityn muokatun uuden tyyppisen olion.
                  //siksi tämä pitää merkata virtuaaliseksi, jotta tuhottaessa
                  //ymmärretään kutsua BaseClass destruktori ja sen uuden muokatun
                  //luokan destruktori eikä vain yksistään BaseClass destruktori.
                  //Muuten on mahdollisuus muistivuotoon koska se uusi muokattu luokka
                  //voi allokoida konstruktorissaan muistia, joka tulee vapauttaa myös.
    int * pointerToIntegerTable;

};

#endif // BASECLASS_H
