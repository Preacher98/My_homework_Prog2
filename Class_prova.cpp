#include<iostream>
#include"Class_quadrato.h"
using namespace std;

int main()
{
    Class_quadrato obj1; 
    double n=0;
    cout<<"inserisci il valore della base: ";
    cin>>n;  
    obj1.setbase(n);
    cout<<"inserisci il valore della altezza: ";
    cin>>n;  
    obj1.setaltezza(n);
    obj1.ifsquare();
    cout<<"Perimetro= "<<obj1.perimetro()<< " Area= "<< obj1.area()<<" Diagonale= "<< obj1.diagonale()<< endl;

}
