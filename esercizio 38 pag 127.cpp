#include <iostream>
#include <cmath>
using namespace std;
int sconto;
float prezzo,prezzo_scontato;
void calcolo_prezzo_scontato(float p,float ps,int s);

int main()
{
    cout<<"Inserire il prezzo di vendita:"<<endl;
    cin>>prezzo;
    cout<<"Inserire percentuale di sconto:"<<endl;
    cin>>sconto;
    calcolo_prezzo_scontato(prezzo, prezzo_scontato, sconto);


    return 0;
}
void calcolo_prezzo_scontato(float p,float ps,int s)
{
    int variabile_di_supporto;
    variabile_di_supporto = (p/100)*s;
    ps = (p - variabile_di_supporto);
    cout<< ps;

}
