/******************************************************************************

Ejercicio =7
Inicio
    Declarar libro1, libro2, libro3 como cadenas de texto
    Leer libro1
    Leer libro2
    Leer libro3
    Imprimir libro3
    Imprimir libro2
    Imprimir libro1
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
