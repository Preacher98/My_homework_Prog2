#include<iostream>
using namespace std;
void func1(int * ptr);
void func2(int *& ptr);
int main()
{
    int *p;
    cout << "p:\t"<< p << endl;
    func1(p);
    cout << "p:\t"<< p << endl;
    func2(p);
    cout << "p:\t"<< p << endl;


}

void func1(int * ptr)
{
    
    ptr=(int*)20;
}
void func2(int *& ptr)
{
   
    ptr=(int*)10;
}