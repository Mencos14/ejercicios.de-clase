#include <iostream> 
#include <string>
using namespace std;
int main()
{
    float corto1, corto2, parcial1, parcial2, laboratorio, proyecto;
    string nombre ="";
    cout<<"ingrese su nombre: ";
    cin>>nombre;

    cout<<"ingrese la nota del corto1: ";
    cin>>corto1;

    cout<<"ingrese la nota del corto2 ";
    cin>>corto2;

    cout<<"ingrese la nota del parcial1 ";
    cin>>parcial1;

    cout<<"ingrese la nota del parcial2 ";
    cin>>parcial2;

    cout<<"ingrese la nota del laboratorio ";
    cin>>laboratorio;

    cout<<"ingrese la nota del proyecto ";
    cin>>proyecto;

    float promedio=(corto1* 0.10)+(corto2* 0.10)+(parcial1* 0.15)+(parcial2* 0.20)+(laboratorio* 0.20 )+(proyecto* 0.25);
    cout<<"promedio final: ";
    cout<< promedio <<endl;

     if(promedio >=6){

        cout << "paso la materia" << endl;
     }else
     {
        cout << "reprobo la materia" << endl;
     }
    return 0;



}