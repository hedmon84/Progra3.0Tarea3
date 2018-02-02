//
// Created by Hedmon lopez on 02/02/2018.
//

#include <iostream>
using namespace std;
int main() {

    int num1, num2;

    cout << "Ingrese entero\n ";

    cin >> num1;
    cin >> num2;

    if (num1 > num2) {

        if (num1 % num2 == 0) {

            cout << "Es Numero:  " << num1
                    <<"  Es multiplo de = " <<num2;

        } else cout << "No es multiplo " << num2;


    } else {
        if (num2 % num1 == 0) {
            cout << "Es Numero:  " << num1
                 <<"Es multiplo de = " <<num2;

        } else cout << "No es multiplo " << num2;


    }






    return 0;
}
