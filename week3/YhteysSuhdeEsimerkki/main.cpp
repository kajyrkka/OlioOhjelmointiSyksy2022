#include <iostream>

using namespace std;

#include "alypostilaatikko.h"
#include "postimies.h"
#include "asukas.h"

// kannattaa katsoa video https://www.youtube.com/watch?v=URE9MCTF8Ls

int main()
{
    Alypostilaatikko laatikko;

    Postimies p(laatikko);     // laatikosta otettiin kopio ja Postimies voi tehdä sillä mitä lystää
                               // alkuperäinen älypostilaatikko ei muutu mihinkään kun postimies
                               // operoi älypostilaatikon metodien tai muuttujien kanssa.
                               // Eli tässä on kyse ns. assosiaatiosta olioiden välillä.

    Asukas a(laatikko);        // nyt ei annetakaan kopiota vaan referenssi Asukas ei voi tuhota
                               // alkuperäistä älypostilaatikkoa, koska referenssi välitetään
                               // const tyyppisenä.
                               // Tässä on kyse ns. aggregationista.

                               // Ja viimeinen olioiden välinen yhteistyön muoto on ns. composition
                               // suomeksi kooste olio ja siitä sitten ensi viikon tunneilla.


    return 0;
}
