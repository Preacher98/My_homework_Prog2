#ifndef VENDITORE_H
#define VENDITORE_H
#include"Prodotti.h"
#include"ProdottiAlimentari.h"
#include"ProdottiPerBambini.h"
#include<string>
#include<iostream>
using namespace std;
class Venditore
{
protected:
    int codiceV;
    string nome;
    int numprod;
    int i=0;


public:
    Prodotti **venduto = new Prodotti*[getnumprod()];
    Venditore();
    Venditore(int cv,string name){codiceV=cv; nome=name;};
    ~Venditore();
    void setnumprod(int n){numprod=n;};
    int getnumprod(){return this->numprod;};
    void setCodice(int c){codiceV=c;};
    int getCodice(){return codiceV;};
    void setNome(string name){nome=name;};
    string getNome(){return nome;};
    //Venditore& operator<<(const Venditore& vend){};
    //double calcolaPrezzoTot(){};
    //double calcolaValoreMagazzino(){};
    void aggiungiProdotto(Prodotti* aliment)
    {
        venduto[i]=aliment;
        i++;
    };
   /* void aggiungiProdotto(Prodotti* prodbamb)
    {
        cout<<"ciao";
        venduto[i]=*prodbamb;
        cout<<"ciao2.2";
        i++;
    };*/
    void stampavendor()
    {
        cout<<"\nNome: "<<nome<<" Codice: "<<codiceV<<" N. prod: "<<numprod<<endl;
        if (i>0)
        {
        for (int i = 0; i < getnumprod(); i++)
        {
            cout<<"Prodotto n "<<i<<" Codice: "<<venduto[i]->getcodice()<<" Prezzo: "<<venduto[i]->getprezzo()<<endl;
        }
        }
    }
};
Venditore::Venditore()
{
    codiceV=0;
    numprod=0;
}

Venditore::~Venditore()
{
    
}
#endif