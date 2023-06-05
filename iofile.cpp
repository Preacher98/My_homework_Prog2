#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream write("input.txt",ios::app);
    string baudo="PIPPO";
    write << baudo << " ";
    string pippo;
    while (input)
    {
        input >> pippo;
    cout << pippo << " ";
    }
    
    
    return 0;
}