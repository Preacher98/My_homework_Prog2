#ifndef PRODOTTIALIMENTARI_H
#define PRODOTTIALIMENTARI_H
#include"Prodotti.h"
#include<string>

using namespace std;
class ProdottiAlimentari: public Prodotti
{
private:
    string datascad;
public:
    ProdottiAlimentari(int codi, double prex, string dat){codice=codi; prezzo=prex; datascad=dat;};
    //bool verifica(){};
    //ProdottiAlimentari& operator<<(const Prodotti& product){};
    ProdottiAlimentari& operator=(const Prodotti& prod)
    {
        
        const ProdottiAlimentari* prodal = dynamic_cast<const ProdottiAlimentari*>(&prod);
        if(prodal)
        {
          this->datascad=prodal->datascad;
        }return *this;
    }
};
#endif
