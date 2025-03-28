/******************************************************************************

Ejercicio 1: Suma entera de dos números de tipo double
Inicio
    Escribir "Ingrese dos números:"
    Leer num1, num2
    suma <- num1 + num2
    Escribir "Resultado:", ConvertirAEntero(suma)
Fin


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double a, b= 0;
    cout << "Ingresa el valor de a: " << endl;
    cin >> a;
    cout << "Ingresa el valor de b: " << endl;
    cin >> b;
    int c= (a+b);
    cout << "La parte entera de la suma es: " << c  << endl;
   
    return 0;
}
