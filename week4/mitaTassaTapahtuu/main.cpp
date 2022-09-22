#include <iostream>
using namespace std;
#include "classa.h"
#include "classb.h"


int main()
{


     classB * Bptr = new classB();
     classB & refB = *Bptr;
     classA * Aptr = new classA();

     Aptr->useAssosiation(*Bptr);
     //Aptr->useAggegation(refB);
     //Aptr->useComposition();


     delete Bptr;
     delete Aptr;






    /*
    classB B;
    classB & refB = B;
    classA A;


    //A.useAssosiation(B);
    //A.useAggegation(refB);
    A.useComposition();

  */

















    return 0;


}


