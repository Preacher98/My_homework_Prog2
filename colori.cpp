#include<iostream>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
using namespace std;
int main()
{
    cout<<YELLOW<<"Ciao"<<RED<<" CIAO"<<GREEN<<" CIAO "<<RESET;
    return 0;
}