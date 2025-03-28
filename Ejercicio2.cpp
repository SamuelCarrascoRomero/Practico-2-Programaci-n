/******************************************************************************
Ejercicio 2: Cociente de dos números de tipo double
Inicio
    Escribir "Ingrese dos números:"
    Leer num1, num2
    Si num2 = 0 Entonces
        Escribir "inf"
    Sino
        cociente <- num1 / num2
        Escribir "Resultado:", cociente
    FinSi
Fin


*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double a, b= 0;
    cout << "Ingresar el valor de a: " << endl;
    cin >> a;
    cout << "Ingresar el valor de b: " << endl;
    cin >> b;
    float o = (a/b);
    cout << "El resultado es: "  << o << endl;
    
    return 0;
}
