#include<iostream>
#include<cmath>
using namespace std;
class Class_quadrato
{
private:
    double base;
    double altezza;
    double pow(double n){return n*n;};
    
public:
   double perimetro();
   double area();
   double diagonale();
   void setbase(double n){base=n;};
   void setaltezza(double n){altezza=n;};
   double getbase(){return base;};
   double getaltezza(){return altezza;};
   void ifsquare();

};

double Class_quadrato::perimetro()
{
    return (base+altezza)*2;
}

double Class_quadrato:: area()
{
    return base*altezza;
}

double Class_quadrato::diagonale()
{
    double diag=sqrt((pow(base)+pow(altezza)));
    return diag;
}
void Class_quadrato::ifsquare()
{
    if (base==altezza)
    {
        cout<<"Dato che base= "<<getbase()<<" e altezza= "<<getaltezza()<<" sono uguali allora la figura è un quadrato."<<endl;
    }
    
}