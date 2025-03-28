/******************************************************************************
Ejercicio 15
Inicio
    Leer a, b, c
    Imprimir "Los valores son: a = " + a + " b = " + b + " y c = " + c
    temp <- a
    a <- b
    b <- c
    c <- temp
    Imprimir "Permutamos: a => b, b => c, c => a"
    Imprimir "Los valores despues de la permutacion son: a = " + a + " b = " + b + " c = " + c
Fin


*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Ingrese los valores de a, b y c: ";
    cin >> a >> b >> c;
    
    cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
    cout << "Permutamos: a > b, b > c, c > a" << endl;
    
    int temp = a;
    a = c;
    c = b;
    b = temp;
    
    cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << endl;
    
    return 0;
}
