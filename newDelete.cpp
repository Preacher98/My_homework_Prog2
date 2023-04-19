#include<iostream>
using namespace std;

int main()
{
    int* p;
    p = new int(7);
    cout << p << ":\t"<< *p << endl;
    delete p;
    cout << p << ":\t"<< *p << endl;
    int *pp = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout << (pp+1) << ":\t" << pp[i] << endl;

    }
    cout << endl;
     
    int* skip_5_p = new int[10] () + 5;
    cout << skip_5_p << ":\t" << *skip_5_p << endl;
    cout << endl;
    int* inizio_array = skip_5_p - 5;
    for (int i = 0; i < 10; i++)
    {
        cout << &inizio_array[i] << ":\t" << inizio_array[i] << endl;
    }
    delete [] inizio_array;
         return 0;
}