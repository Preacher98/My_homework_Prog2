 #include<iostream>
 #include"temperatura.h"

 using namespace std;

 int main(){
    double inp;
    char unit;
    do
    {
        if(cin.fail()){cin.clear(); cin.ignore(500,'\n');}
        cout <<"inserisci un valore di temperatura seguito dalla sua unita' di misura (Es. -4c)"<<endl;
        cin >> inp;
        cin >> unit;
    } while (cin.fail()|| (unit!='C' && unit!='F'));

    cout << inp << "\t" << unit;
    if(unit=='C'){
        cout << c2f(inp)<< "F" << endl;}
        else
        cout << f2c(inp)<< "C "<<endl;
    return 0;
 }