/******************************************************************************
Ejercicio 10 
Inicio
    Leer num1, num2
    Si num1 < 0 o num2 < 0 Entonces
        Imprimir 0
    Sino
        S <- num1 + num2
        cantidad_digitos <- longitud de S
        resultado <- cantidad_digitos * S
        Imprimir resultado
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << 0 << endl;
    } else {
        int suma = a + b;
        int numDigitos = 0;

        if (suma == 0) {
            numDigitos = 1; 
        } else {
            while (suma > 0) {
                suma /= 10;
                numDigitos++;
            }
        }

        cout << (a + b) * numDigitos << endl;
    }

    return 0;
}
