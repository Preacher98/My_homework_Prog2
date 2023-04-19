#include <iostream>
using namespace std;

void stampa(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<< endl;
}
void scambia(int& a,int& b)
{
    int aux=a;
    a=b;
    b=aux;
}

void quicksort(int a[],int sx, int dx){
    int i=sx;
    int j=dx;
    int pivot=a[(sx+dx)/2];
    while (i<=j)
    {
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if (i<=j)
        {
           scambia(a[i],a[j]);
           i++; j--;
        }
        
    }
    if (j>sx)
    {
        quicksort(a,sx,j);
    }
    if (i<dx)
    {
        quicksort(a,i,dx);
    }
    
    
    
}

void quicksort(int a[], int n)
{
    quicksort(a,0,n-1);
}

int main()
{
    int a[10]={12,3,4,11,101,2,0,90,15,10};
    cout << "input: ";
    stampa(a,10);
    quicksort(a,10);
    cout<<endl<<"output: ";
    stampa(a,10);

    return 0;
}