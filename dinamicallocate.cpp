#include <iostream>
using namespace std;

int main()
{   
    int *p;
    //allocazione dinamica
    p=new int(7);
    cout <<p<< ":\t"<< *p << endl;
    if(p) //controlla se la memoria è deallocata o meno
    delete p;
    cout <<p<< ":\t"<< *p << endl;

    int *pp = new int[5];
    for (int i = 0; i < 5; i++)
    {
        pp[i]=i;
        cout<< pp[i] << endl;
    }
    delete [] pp;
}