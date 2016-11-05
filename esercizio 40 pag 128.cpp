#include <iostream>
#include <cmath>
using namespace std;
int m1, q1, xp, yp;
void punto_appartenente (int m,int q,int x, int y);

int main()
{
    cout<<"Inserisci m:"<<endl;
    cin>>m1;
    cout<<"Inserisci q:"<<endl;
    cin>>q1;
    cout<<"Inserisci xp:"<<endl;
    cin>>xp;
    cout<<"Inserisci yp:"<<endl;
    cin>>yp;
    punto_appartenente(m1,q1,xp,yp);


    return 0;

}
void punto_appartenente (int m,int q,int x, int y)
{
    if ((-y+(m*x)+q )== 0) cout<<"Il punto P appartine alla retta r.";
    else cout<<"Il punto P non appartiene alla retta r.";

}
