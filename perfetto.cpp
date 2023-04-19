#include <iostream>
using namespace std;

bool perfetto(int n){
    int acc = 0;
    for (int i = 0; i < (n/2)+1; i++)
    {
       if (n%i==0)
       {
        acc += i;
       }
    
    }
    return (acc == n);
}

int main(){
    int x;
    cout << "inserisci un intero positivo: ";
    cin >> x;
    if(perfetto(x)) cout << x << "e' un numero perfetto ! "<< endl;
    else cout << x << "non e' un numero perfetto ! "<< endl;

    return 0;
}