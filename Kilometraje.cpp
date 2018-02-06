//
// Created by Hedmon lopez on 05/02/2018.
//


#include <iostream>
using namespace std;

int main() {
    double  kconducidos = 0;
    double  Lusados;
    int salir ;
    double resultado=0;




    while (kconducidos != -1 ){
        cout<<"Escriba los kilómetros usados (-1 para salir): ";
        cin>>kconducidos;
        cout<<"Escriba los litros: ";
        cin>>Lusados;
        double kpl = (kconducidos)/Lusados;
        cout<<"KPL en este reabastecimiento: "<<kpl<<endl;
        cout<<"Total KPL: "<< kpl-resultado<<endl<<endl;
        resultado=kpl;



    }



    return 0;
}
