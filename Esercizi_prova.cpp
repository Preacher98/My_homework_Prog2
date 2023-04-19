#include <iostream>
using namespace std;
struct input
{
    string nome;
    string cognome;
    int eta;
};

struct input input_parametri(struct input obj);
int ***genMatrix(int N, int M);
int ***fill_Matrix(int N, int M,int ***matrix,struct input obj);
void printmatrix(int N, int M, int ***matrix);
int *genrandom(int N,struct input obj);
int main()
{   
    struct input obj;
    obj=input_parametri(obj);
    //cout<<obj.nome<<" "<<obj.cognome.length()<<" "<<obj.eta<<endl;
    int N=obj.nome.length(),M=obj.cognome.length();
    //cout<<N<<" "<<M<<endl;
    //int *rando=genrandom(N,obj);
    //genrandom(N,obj);
    int ***matrix=genMatrix(N,M);
    //cout<<"ciao"<<endl;
    fill_Matrix(N,M,matrix,obj);
    //cout<<"ciao"<<endl;
    printmatrix(N,M,matrix);
    return 0;
}
int *genrandom(int N,struct input obj)
{
    
    int *random= new int;
            *random=(rand())%(obj.eta-N+1)+N;
            //cout<< *random<< " ";
            return random;
}

int ***fill_Matrix(int N, int M,int ***matrix,struct input obj){
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            /*int *random= new int;
            *random=(rand())%(obj.eta-N+1)+N;
            matrix[i][j]=random;*/
            matrix[i][j]=genrandom(N,obj);
        }
        
    }
    return matrix;
}

struct input input_parametri(struct input obj){
    cout<<"Inserisci il nome: ";
    cin>>obj.nome;
    cout<<"\nInserisci il cognome: ";
    cin>>obj.cognome;
    cout<<"\nInserisci l'età: ";
    cin>>obj.eta;

    return obj;
}

int ***genMatrix(int N, int M){
    //cout<<"ciao"<<endl;
    int ***matrix=new int**[N];
    for (int i = 0; i < N; i++)
    {
        matrix[i]=new int*[M];
    }
    
    return matrix;
}
void printmatrix(int N, int M, int ***matrix){
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout<<*matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}