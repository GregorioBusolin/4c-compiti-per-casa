#include<iostream>
using namespace std;

int numero_reparti;
char nome_reparto;
float incasso_reparto;
float somma_i = 0;
int n = 0;
int i = 0;

void acquisizione_somma (char n_rep, float i_rep);
void media_incassi ();

int main()
{
    cout<<"Inserisci il numero dei reparti:"<<endl;
    cin>>numero_reparti;
    while ( i<numero_reparti){
    cout<<"Inserire il nome del reparto: "<<endl;
    cin>>nome_reparto;
    cout<<"Inserire l'incasso giornaliero del reparto: "<<endl;
    cin>>incasso_reparto;

    acquisizione_somma (nome_reparto,incasso_reparto);
    i++;
    }
    media_incassi ();



return 0;
}

void acquisizione_somma (char n_rep, float i_rep) // rispettivamente nome reparto e incasso giornaliero reparto
{
    cout<<"RIASSUNTO:"<<endl;
    cout<<"Nome reparto: "<<n_rep<<endl;
    cout<<"Incasso reparto:"<<i_rep<<endl;
    somma_i += i_rep;
    cout<<"Somma provvisoria dell' incassi: "<<somma_i<<endl;
    n++;
}

void media_incassi ()
{
    float media_i;
    media_i = (somma_i/n);
    cout<<"La media degli incassi e':"<<media_i;

}
