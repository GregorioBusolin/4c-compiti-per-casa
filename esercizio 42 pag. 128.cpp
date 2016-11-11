#include <iostream>
#include <string.h>

using namespace std;
float prezzo;
int percentuale_incremento;
int numero_prodotti;
int i=0;
string descrizione;
void calcola_incremento (float p,int perc_incremento);

int main ()
{
    cout<<"Inserisci il numero di prodotti:"<<endl;
    cin>>numero_prodotti;
    while ( i<numero_prodotti){
    cout<<"Inserire il prezzo: "<<endl;
    cin>>prezzo;
    cout<<"Inserire la descrizione: "<<endl;
    cin>>descrizione;
    cout<<"Inserire la percentuale di incremento: "<<endl;
    cin>>percentuale_incremento;
    calcola_incremento (prezzo,percentuale_incremento);
    cout<<"Descrizione: "<<descrizione<<endl<<endl;
    cout<<"UN ALTRO PRODOTTO:"<<endl;
    }


 i++;

return 0;
}

void calcola_incremento (float p,int perc_incremento)
{   cout<<"RIASSUNTO:"<<endl;
    cout<<"prezzo: "<<p<<endl;
    cout<<"percentuale incremento:"<<perc_incremento<<endl;
    int variabile_d_appoggio;
    float prezzo_incrementato;
    variabile_d_appoggio = ((p/100)*perc_incremento);
    prezzo_incrementato = (p+variabile_d_appoggio);
    cout<<"prezzo incrementato:"<<prezzo_incrementato<<endl;


}
