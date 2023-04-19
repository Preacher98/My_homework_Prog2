#include<iostream>
using namespace std;

float& foo(float*,int);

int main()
{
    float v[5]={32.4,21.5,34.1,12.4,13.5};
    for (int i = 1; i <=5; i++)
    {
        foo(v,i)=1.0/i;
        //cout << "v["<<i<<"]:\t"<< v[i]<< endl;
    }
    for (int i = 0; i <5; i++)
    {
        cout << "v["<<i<<"]:\t"<< v[i]<< endl;
    }
    return 0;
}
//restituisce un alias al singolo elemento dell'array
float& foo(float *a, int k)
{
    return a[k-1];//*(a+k-1)
}