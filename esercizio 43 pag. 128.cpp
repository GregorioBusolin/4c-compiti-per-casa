#include<iostream>
#include <string.h>
using namespace std;

int numero_voti_primo;
int numero_voti_secondo;
string nome_primo_candidato;
string nome_secondo_candidato;

void somma_voti_e_calcola_percentuale(int n_v_prim_c,int n_v_sec_c);

int main()
{
    cout<<"Inserisci il nome del primo candidato:  "<<endl;
    cin>>nome_primo_candidato;
    cout<<"Inserisci il numero di voti per il primo candidato:  "<<endl;
    cin>>numero_voti_primo;
    cout<<"Inserisci il nome del secondo candidato:  "<<endl;
    cin>>nome_primo_candidato;
    cout<<"Inserisci il numero di voti per il secondo candidato:  "<<endl;
    cin>>numero_voti_secondo;

    somma_voti_e_calcola_percentuale(numero_voti_primo,numero_voti_secondo) ;

return 0;
}

void somma_voti_e_calcola_percentuale(int n_v_prim_c,int n_v_sec_c)
{
   int percentuale_primo_candidato;
   int percentuale_secondo_candidato;
   int somma_dei_voti;
   somma_dei_voti = (n_v_prim_c+n_v_sec_c);
   cout<<"La somma dei voti e' : "<<somma_dei_voti<<endl;
   percentuale_primo_candidato = (100*n_v_prim_c)/somma_dei_voti;
   percentuale_secondo_candidato = (100*n_v_sec_c)/somma_dei_voti;
   if (percentuale_primo_candidato>percentuale_secondo_candidato)
   {
       cout<<"La percentuale piu' alta e' del primo candidato: "<<percentuale_primo_candidato<<endl;
       cout<<"La percentuale piu' bassa e' del secondo candidato: "<<percentuale_secondo_candidato<<endl<<endl;
       cout<<"! Il VINCENTE e' il PRIMO CANDIDATO !";
       }

    else {
            cout<<"La percentuale piu' alta e' del secondo candidato: "<<percentuale_secondo_candidato<<endl;
            cout<<"La percentuale piu' bassa e' del primo candidato: "<<percentuale_primo_candidato<<endl<<endl;
            cout<<"! Il VINCENTE e' il SECONDO CANDIDATO !";
    }


}
