#include <iostream>
using namespace std;
int main() {

    int a,b,c,d,e;

    cout << "Imprima 5 enteros " << endl;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    int menor = a;
    if(b<menor)
       menor=b;
    if(c<menor)
        menor=c;
    if(d<menor)
        menor=d;
    if(e<menor)
        menor=e;

    int mayor=a;

    if(b>mayor)
        mayor=b;
    if(c>mayor)
        mayor=c;
    if(d>mayor)
        mayor=d;
    if(e>mayor)
        mayor=e;

    cout<<" Numeros mayores = "<< mayor;
    cout<<" Numeros mayor =  "<< menor;



    return 0;
}