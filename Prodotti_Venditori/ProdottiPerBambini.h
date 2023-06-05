#ifndef PRODOTTIBAMBINI_H
#define PRODOTTIBAMBINI_H
#include"Prodotti.h"
#include"Fasceta.h"
using namespace std;
class ProdottiPerBambini:public Prodotti
{
private:
    //Fasceta fascia;
public:

    ProdottiPerBambini(int c, double p, int h){
        codice=c;
        prezzo=p;
        Fasceta fascia(h);};
    ~ProdottiPerBambini();
    ProdottiPerBambini& operator=(const Prodotti& prod)
    {
        const ProdottiPerBambini* prodbamb = dynamic_cast<const ProdottiPerBambini*>(&prod);
        if (prodbamb)
        {
            /* code */
        }return *this;
        
    }
};

#endif