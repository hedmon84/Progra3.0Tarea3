//
// Created by Hedmon lopez on 05/02/2018.
//

#include <iostream>
using namespace std;

int main() {
    double  Horas = 0;
    double  salario = 0;
    double resultado=0;




    while (Horas != -1 ){
        cout<<"Introduzca las horas trabajadas (-1 para salir): ";
        cin>>Horas;
        cout<<"Introduzca la tarifa por horas del empleado ($00.00): ";
        cin>>salario;
        cout<<"El salario es: "<<(Horas)*salario<<endl<<endl;

    }

    return 0;
}