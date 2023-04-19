#include<iostream>
using namespace std;

int main()
{
    char l[]="abc?e";
    char u[]="ABC?E";
    char* u_ptr = &u[0]; //Assegnazione esplicita (1*zero byte)
    *(l+3)='d'; // andiamo a modificare la posizione 3 dell'array
    *(u+3)='D';
    char d=l[3];
    cout << "d[3]:\t"<<d<<endl;
    cout << "lower:\t"<<l<<endl;
    cout << "Higher:\t"<<u<<endl;
    return 0;
}