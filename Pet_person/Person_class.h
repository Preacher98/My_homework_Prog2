#include <string>
#include <iostream>
#include "Pet_class.h"
using namespace std;
class Person_class
{
private:
    string nome;
    string cognome;
    int eta;
    int count=0;
    
public:
    Pet_class animali[];
    Person_class();
    ~Person_class();
    void setnome(string n){nome=n;};
    void setcognome(string c){cognome=c;};
    void seteta(int e){eta=e;};
    void setcount(int co){count=co;};
    int getcount(){return count;};
    string getnome(){return nome;};
    string getcognome(){return cognome;};
    int geteta(){return eta;};
    
};

Person_class::Person_class()
{

}

Person_class::~Person_class()
{
}
