#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream write("input.txt",ios::app);
    int a,b;
    input >> a >> b;
    cout<< a << " " << b;
    string baudo="PIPPO";
    write << baudo;
    string pippo;
    write << pippo;
    cout<< pippo;
    return 0;
}