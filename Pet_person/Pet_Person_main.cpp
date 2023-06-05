#include <iostream>
#include <string>
#include "Person_class.h"
#include "Pet_class.h"
#include "animal_type.h"
using namespace std;
Person_class* inserimento();
int main()
{
    int num,i=0,count;
    string nome,cognome;
    cout<<"Quante persone vuoi inserire ? : ";
    cin >> num;
    Person_class* persona = new Person_class[num];

    for (int i = 0; i < num; i++)
    {
        persona[i]=*inserimento();
        cout<<"Il signor "<<persona[i].getnome()<<persona[i].getcognome()<<"Quanti animali ha ?";
        cin>>count;
        persona[i].setcount(count);
        //inserisci animale


    }
    
}

Person_class* inserimento()
{
    string nome,cognome;
    int eta;
    Person_class* person=new Person_class;
        cout<<"inserisci il nome: ";
        cin>>nome;
        person->setnome(nome);
        cout<<endl<<"inserisci il cognome: ";
        cin>>cognome;
        person->setcognome(cognome);
        cout<<endl<<"inserisci l'età: ";
        cin>>eta;
        person->seteta(eta);
        return person;
}

Animal_type choose()
{
        Animal_type s;
        int n=0;
        cout<<"Che animale vuoi inserire ?"<<"\n1)Dog \n2)Cat \n3)Scaratoporagno \n";
        cin>>n;
        s=static_cast<Animal_type>(n);
        return s;
}
void inserisci_animali(Person_class* persona,int nume)
{   
    for (int i = 0; i < nume; i++)
    {
        persona->animali[i]=registra_animale();
    }
    
}

Pet_class registra_animale(Person_class* persona)
{   
    Animal_type s=choose();
    Pet_class bestiolina(s);
    
}