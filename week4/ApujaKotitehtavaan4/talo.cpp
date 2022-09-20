#include "talo.h"

Talo::Talo()
{
    cout<<"Talo construktori"<<endl;
    /*asuntoPinosta.maarita(2,100);
    cout << "Asunnon kulutus 1 euron hinnalla = "<< asuntoPinosta.laskeKulutus(1) << endl;
    */
    asunto_ptr = new asunto();
    asunto_ptr->maarita(2,100);

    cout << "Asunnon kulutus 1 euron hinnalla = "<< asunto_ptr->laskeKulutus(1) << endl;

}

Talo::~Talo()
{
    cout<<"Talo destruktori"<<endl;
    delete asunto_ptr;
    asunto_ptr = nullptr;
}
