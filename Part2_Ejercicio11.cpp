/******************************************************************************

Ejercicio 11 
Inicio
    Leer codigo

    Si codigo == 11235813 Entonces
        Imprimir "Se encontro Fibonacci"
    Sino
        Imprimir "Esto no es de Fibonacci"
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int fibo=0;
    cout << "Ingrese el codigo del perro: " << endl;
    cin >> fibo;
    
    if(fibo==11235813){
        cout << "Se encontro Fibonacci" << endl;
    }
    else {
        cout << "Esto no es de Fibonacci" << endl;
    }
    return 0;
}
