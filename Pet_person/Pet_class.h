#include<string>
using namespace std;
class Pet_class
{
protected:
    Animal_type animale;
    string razza;
public:
    Pet_class(Animal_type s);
    ~Pet_class();
    //void setnome(string n){nome=n;};
    //void setanimale(string a){animale=a;};
    void setrazza(string r){razza=r;};
    //void seteta(int e){eta=e;};
    //string getnome(){return nome;};
    //virtual string getanimale(){return animale;};
    virtual string getrazza(){return razza;};
    //int geteta(){return eta;};


};

Pet_class::Pet_class(Animal_type s)
{   
    animale=s;
}

Pet_class::~Pet_class()
{
}
