#ifndef ASUKAS_H
#define ASUKAS_H
#include "alypostilaatikko.h"

class Asukas
{
public:
    Asukas(const Alypostilaatikko& A);
    void halyta();
    const Alypostilaatikko& muuttuja;
};

#endif // ASUKAS_H
