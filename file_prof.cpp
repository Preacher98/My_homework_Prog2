// input.txt e' un file di testo che contiene due numeri separati da spazio

#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream inPippo("input.txt");
    ofstream outPippo("output.txt");

    int a, b;
    inPippo >> a >> b;
    cout << "a:\t" << a << "\tb:\t" << b << endl;
    outPippo << a << "\t" << b<< "\t"  << (a+b)<< "\t"  << (a*b);

    inPippo.close();
    outPippo.close();

    fstream filein("multilineinput.txt");
    for(string line; getline(filein, line);){
        cout << line << endl;
    }


    return 0;
}
