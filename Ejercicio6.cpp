/******************************************************************************

Ejericico 6 
Inicio
    Declarar nombre, apellido como cadenas de texto
    Leer nombre
    Leer apellido
    Imprimir apellido seguido de una coma y un espacio, luego nombre
Fin

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string name, lastname;
    cout << "Ingrese su nombre y apellido: " << endl;
    cin >> name >> lastname;
    cout << lastname << "  " << name << endl;
    return 0;
}
