#ifndef PRODOTTI_H
#define PRODOTTI_H
class Prodotti
{
protected:
    int codice;
    double prezzo;
public:
    Prodotti(){}; 
    Prodotti(int c, double p);
    ~Prodotti();
    void setcodice(int c){codice=c;};
    int getcodice(){return codice;};
    void setprezzo(double p){prezzo=p;};
    double getprezzo(){return prezzo;};
    virtual Prodotti& operator=(const Prodotti& prod){return *this;};
    //virtual Prodotti& operator<<(const Prodotti& product){};
};

Prodotti::Prodotti(int c, double p)
{
    codice=c;
    prezzo=p;
}
Prodotti::~Prodotti()
{
}

#endif