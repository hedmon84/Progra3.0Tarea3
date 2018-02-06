//
// Created by Hedmon lopez on 05/02/2018.
//

#include <iostream>

using namespace std;

int radio=0;
double perimetro=0, area=0;

int main()
{
    cout << "::Circulo::\n";
    cout << "Ingrese el radio: "; cin >> radio;
    cout<<"Diametro: "<<radio*3.14;
    perimetro = 2 * 3.14 * radio;
    area = 3.14 * radio * radio ;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
    return 0;
}