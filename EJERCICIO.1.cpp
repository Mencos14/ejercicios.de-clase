#include <iostream>
using namespace std;
int main()
{
    
     float angulo1,angulo2,angulo3;

    cout << "ingrese el primer angulo: ";
    cin >> angulo1;

    cout << "ingrese el segundo angulo: ";
    cin >> angulo2;

    //calcula el tercer angulo
    angulo3=180- (angulo1 + angulo2);
    
    cout << "el tercer angulo es:" <<angulo3 << endl;

    if (angulo1 + angulo2 > 180)
    {
        cout << "datos incorrectos: ";
    }

    return 0;

}

    
    