//
// Created by Hedmon lopez on 05/02/2018.
//

#include <iostream>
using namespace std;

int main() {
    double  Ventas = 0;
    double  salario = 200;
    double resultado=0;




    while (Ventas != -1 ){
        cout<<"Introduzca las ventas en dolares (-1 para salir): ";
        cin>>Ventas;
        double total=(Ventas)*0.09;
        cout<<"El salario es: "<<salario+total<<endl<<endl;

    }



    return 0;
}