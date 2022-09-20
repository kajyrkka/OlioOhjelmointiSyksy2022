#ifndef TALO_H
#define TALO_H
#include <iostream>
using namespace std;
#include "asunto.h"

class Talo
{
public:
    Talo();
    ~Talo();

private:
    //asunto asuntoPinosta;
    asunto * asunto_ptr;
};

#endif // TALO_H
