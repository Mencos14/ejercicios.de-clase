#include <iostream>
using namespace std;
int main()
{
    int edad;

    //solicitar al usuario que ingrese su edad

    cout << "ingrese su edad: ";
    cin >> edad;

    if (edad >=18){

        cout << "eres mayor de edad. " << endl;
    } else {
        cout << "eres menor de edad. " <<endl;
    }

    return 0;

    }




}