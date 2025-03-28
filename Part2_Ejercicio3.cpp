/******************************************************************************


Ejercicio 3
Inicio
    Leer A, B

    Si B == 0 Entonces
        Imprimir "Imposible"
    Sino
        cociente <- A // B
        Imprimir cociente
Fin


*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A, B=0;
    cout << "Ingrese los valores: " << endl;
    cin >> A >> B;
    if (B == 0){
        cout << "IMPOSIBLE" << endl;
    }
    else {
        cout << A/B << endl;
    }
    
    return 0;
}
