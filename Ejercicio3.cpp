/******************************************************************************

Ejercicio 3 
Inicio
    Declarar variables: ancho, alto

    Escribir "Ingrese el ancho y el alto del rectángulo: "
    Leer ancho, alto

    área <- ancho * alto

    Escribir "El área del rectángulo es: ", área
Fin

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
    int width, height=0 ;
    cout << "Enter rectangle width and height" << endl;
    cin >> width;
    cin >> height;
    cout << "Rectangle area is " << width * height << endl;

    return 0;
    
}
