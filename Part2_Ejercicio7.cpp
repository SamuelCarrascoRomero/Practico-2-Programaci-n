/******************************************************************************
Ejercicio 7
Inicio
    Leer radio  
    Si radio < 0 Entonces
        Imprimir "Error: Radius cannot be negative"  
    Sino
        area <- 4 * PI * radio^2  
        Imprimir area  
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    double r=0;
    cout << "Ingresar el radio de la esfera: " << endl;
    cin >> r;
   
    if (r<0){
        cout << "Radius cannot be negative." << endl;
    }else {
        double area = 4*(M_PI)*(r*r);
        cout << "El area de la esfera es: " << area << endl;
    }
    return 0;
}
