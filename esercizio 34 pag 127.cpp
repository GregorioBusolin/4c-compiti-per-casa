#include <iostream>
using namespace std;
int numero;
int i=0;
void sequenza_5numeri_interi(int& n);
int main ()
{
    cout<<"Scrivi un numero intero:"<<endl;
    cin>>numero;
    cout<<"Cinque numeri successivi:"<<endl;
    sequenza_5numeri_interi(numero);

    return 0;
}
void sequenza_5numeri_interi(int& n)
{
    while (i<=5){
            n++;
            cout<<n<<endl;
            i++;
            }
}
