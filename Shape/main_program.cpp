#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Color.h"

using namespace std;
void scelta_figure(Shape* array[],int num);
int num_fig();
void printf_fig(Shape* array[],int num);
Shape* inserisci_rettangolo();
Shape* inserisci_triangolo();
Shape* inserisci_cerchio();


int main()
{
    int num=num_fig();
    Shape*array[num];
    scelta_figure(array,num);
    printf_fig(array,num);

}

int num_fig()
{
    int n;
    cout<<"Quante figure vuoi inserire ?"<<endl;
    cin>>n;
    return n;
}

void scelta_figure(Shape* array[],int num)
{
    int s;
    for (int i = 0; i < num; i++)
    {

    do
    {
        cout<<"Fig. n"<<i<<"Quale figura vuoi inserire ? \n 1)Rettangolo \n 2)Triangolo \n 3)Cerchio "<<endl;
        cin>>s;
    } while (s<1 || s>3);

    switch (s)
    {
    case 1: 
        {array[i]=inserisci_rettangolo();
        break;}
    case 2: 
        {array[i]=inserisci_triangolo();
        break;}
    case 3: {array[i]=inserisci_cerchio();
        break;}
    default:
        break;
    }

    }
    
}
void printf_fig(Shape* array[],int num)
{
    for (int i = 0; i < num; i++)
    {
        array[i]->print();
    }
    
}
Shape* inserisci_rettangolo()
{
    double alt,larg;
    cout<<"\nInserisci l'altezza del rettangolo: ";
    cin>>alt;
    cout<<"\nInserisci la larghezza del rettangolo: ";
    cin>>larg;
    
    return (Shape *) new Rectangle(alt,larg);
    
}

Shape* inserisci_triangolo()
{
    double bas,alt;
    cout<<"\nInserisci l'altezza del triangolo: ";
    cin>>alt;
    cout<<"\nInserisci la base del triangolo: ";
    cin>>bas;
    return (Shape *) new Triangle(bas,alt);
}

Shape* inserisci_cerchio()
{
    double x,y,r;
    cout<<"\nInserisci la coordinata X del centro del cerchio: ";
    cin>>x;
    cout<<"\nInserisci la coordinata Y del centro del cerchio: ";
    cin>>y;
    cout<<"\nInserisci il raggio del cerchio: ";
    cin>>r;
    return (Shape *)new Circle(r,x,y);
}