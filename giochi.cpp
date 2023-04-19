#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

void menu();
void cartaforbicesasso();
void dadi();
void partita();
int main()
{
    menu();
}

void menu()
{
    
    int s=0;
    do{
    cout <<"Benvenuto nel menu !"<<endl<<"Fai la tua scelta ! \n1)Carta Forbice o Sasso\n2)Lancio di dadi \n3)esci \n ";
    cin >> s;
    }while(s<1 || s>3);

    switch (s)
    {
    case 1:
    //cout <<"hello"<<endl;
    partita();
    break;
    case 2:
    //cout <<"hello";
    dadi();
    break;
    case 3:
    //cout <<"hello";
    exit(0);
    break;
    default:
    break;
    }
}
void partita()
{
    const int carta=1,sasso=2,forbice=3;
    int pA=0,pB=0;
    srand(time(NULL));
    int n=0;
    cout <<"Inserisci il numero delle partite che vuoi simulare= "<<endl;
    cin >> n;
    if(cin.fail()){//IOerror!
    cerr<<"IOerror"<<endl;
    cin.clear();//RESETIOflags
    }else cout<<"Input:"<<n<<endl;

    for (int i = 0; i < n; i++)
    {
    int a=rand()%(3-1+1)+1;
    int b=rand()%(3-1+1)+1;
    cout <<"A="<< a << " " <<"B="<< b <<" "<<endl;
    if (a==b)
    {
        cout<<"partita nulla !"<< endl;
    }
    if (a==1 && b==2 || a==2 && b==1)
    {   if(carta==a)
        {pA++;}else if(carta==b){pB++;}
       cout << "Vince Carta!"<<endl;
    }else if (a==2 && b==3 || a==3 && b==2)
       {
        if(sasso==a)
        {pA++;}else if(sasso==b){pB++;}
        cout << "Vince Sasso!"<<endl;
       }else if(a==3 && b==1 || a==1 && b==3)
        {
            if(forbice==a)
            {pA++;}else if(forbice==b){pB++;}
            cout << "Vince Forbice!"<<endl;
        }
    }
        if (pA>pB)
        {
            cout << "Vince il giocatore A con "<<pA<<" Punteggio"<<endl;
        }else if(pA<pB){cout << "Vince il giocatore B con "<<pB<<" Punteggio"<<endl;}else if(pA==pB){cout << "Parità A="<<pA<<"B="<<pB<<endl;}

    menu();
        
}

void dadi()
{
    int n=0;
    cout <<"Inserisci il numero dei lanci che vuoi simulare= "<<endl;
    cin >> n;
    if(cin.fail()){//IOerror!
    cerr<<"IOerror"<<endl;
    cin.clear();//RESETIOflags
    }else cout<<"Input:"<<n<<endl;

    for (int i = 0; i < n; i++)
    {
        int dado1=rand()%(6-1+1)+1;
        int dado2=rand()%(6-1+1)+1;
        int somma=dado1+dado2;
        cout <<" | lancio n "<<i<<" | 1' dado ="<<dado1<<" | 2' dado ="<<dado2<<" | somma="<<somma<<endl;
    }
    cout << endl;
    menu();
}