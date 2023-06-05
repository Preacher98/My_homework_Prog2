#include <iostream>
#include <string>
#include "Venditore.h"
#include "Prodotti.h"
#include "ProdottiAlimentari.h"
#include "ProdottiPerBambini.h"
#include "Fasceta.h"

using namespace std;

void menu(Venditore venditori[], int i);
Venditore *inserisciVendor();
Prodotti *gen_prod_al();
Prodotti *gen_prod_Bamb();
void inserisci_prodotti(Venditore venditori[], int i);
void cerca_venditori(Venditore venditori[], int i);
int generacodice();
int main()
{
    Venditore *venditori = new Venditore[10];
    int i = 0;
    menu(venditori, i);
}

void menu(Venditore venditori[], int i)
{
    int s;
    do
    {
        cout << "Menu";
        cout << "\n1)Registra un venditore \n2)Cerca venditore \n3)Inserisci prodotti \n4)Esci." << endl;
        cin >> s;
    } while (s < 1 || s > 4);

    switch (s)
    {
    case 1:
    {
        venditori[i] = *inserisciVendor();
        i++;
        menu(venditori, i);
    }
    break;
    case 2:
    {
        cerca_venditori(venditori, i);
        menu(venditori, i);
    }
    break;
    case 3:
    {
        inserisci_prodotti(venditori, i);
        menu(venditori, i);
    }
    break;
    case 4:
    {
        exit(0);
    };
    break;
    default:
        break;
    }
}

Venditore *inserisciVendor()
{
    bool flag=true;
    srand(time(0));
    Venditore *vendor = new Venditore;
    int codice = generacodice();
    cout << "codice: " << codice;
    int prod = 0;
    string name;
    vendor->setCodice(codice);
    do{
    cout << "\nInserisci il Nome del venditore: ";
    cin >> name;
    for (int i = 0; i < (int)name.length(); i++)
    {
        if (isdigit(name[i]))
        {
           cout<<"Errore nell'inserimento del nome ! Sei pregato di reinserirlo !! "<<endl;
           flag=false;
           break;
        }else{flag=true;}
        
    }
    }while(flag!=true);
    
    
    vendor->setNome(name);
    do{
    cout << "\nInserisci il numero di prodotti: ";
    cin >> prod;
    }while(prod<2 || prod>12);
    vendor->setnumprod(prod);
    return vendor;
}
int generacodice()
{
    int codice = 0;
    codice = rand() % (9999 - 1000 + 1) + 1000;
    return codice;
}
void cerca_venditori(Venditore venditori[], int i)
{
    int temp_c = 0;
    cout << "Inserisci il codice venditore da cercare: ";
    cin >> temp_c;
    for (int j = 0; j < i; j++)
    {
        if (venditori[j].getCodice() == temp_c)
        {
            venditori[j].stampavendor();
        }
        else
        {
            cout << "Venditore non trovato !! Reinserire il codice !! " << endl;
        }
    }
    menu(venditori, i);
}

void inserisci_prodotti(Venditore venditori[], int i)
{
    int temp_c = 0;
    int j;
    cout << "Inserisci il codice venditore da cercare: ";
    cin >> temp_c;

    for (j = 0; j < i; j++)
    {
        if (venditori[j].getCodice() == temp_c)
        {
            venditori[j].stampavendor();
            cout << "il venditore possiede " << venditori[j].getnumprod() << " prodotti"<<endl;
            for (int d = 0; d < venditori[j].getnumprod(); d++)
            {
                int s;
                cout <<"Prodotto n."<<d<<" Che tipo di prodotto è ? \n1)Prodotti alimentari \n2)Prodotti per bambini ";
                cin >> s;
                switch (s)
                {
                case 1:
                    venditori[j].aggiungiProdotto(gen_prod_al());
                    break;
                case 2:
                    venditori[j].aggiungiProdotto(gen_prod_Bamb());
                    break;
                default:
                    break;
                }
            }
        }
        else
        {
            cout << "Venditore non trovato !! Reinserire il codice !! " << endl;
        }
    }
    menu(venditori, i);
}
Prodotti *gen_prod_al()
{

    int cod;
    double prex;
    string dat;
    cout << "Inserisci il codice del prodotto: ";
    cin >> cod;
    // prodAl->setcodice(cod);
    cout << "\nInserisci il prezzo del prodotto: ";
    cin >> prex;
    // prodAl->setprezzo(prex);
    cout << "Inserisci la data di scadenza nel formato GG/MM/AAAA : ";
    cin >> dat;
    //ProdottiAlimentari *prodAl = new ProdottiAlimentari(cod, prex, dat);
    return (Prodotti*) new ProdottiAlimentari(cod,prex,dat);
}

Prodotti *gen_prod_Bamb()
{
    int c, h;
    double p;
    cout << "Inserisci il codice prodotto: ";
    cin >> c;
    cout << "\nInserisci il prezzo: ";
    cin >> p;
    cout << "In che fascia d'eta si trova ? \n 0)0-3 anni \n1)3-6 anni \n2)6-9 anni \n3)9-12 anni \n";
    cin >> h;
    //ProdottiPerBambini *prodBamb = new ProdottiPerBambini(c, p, h);
    return (Prodotti*) new ProdottiPerBambini(c,p,h);
}