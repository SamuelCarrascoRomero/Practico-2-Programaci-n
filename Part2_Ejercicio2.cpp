/******************************************************************************

Ejercicio 2
Inicio
    Leer A, B, C
    discriminante <- B^2 - 4 * A * C

    Si discriminante < 0 Entonces
        No hay raíces reales
    Sino Si discriminante == 0 Entonces
        raíz <- -B / (2 * A)
        Imprimir raíz
    Sino
        raíz1 <- (-B + Raíz(discriminante)) / (2 * A)
        raíz2 <- (-B - Raíz(discriminante)) / (2 * A)
        Imprimir raíz1, raíz2
Fin


*******************************************************************************/
##include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A, B, C=0;
    cout << "Ingresar valores: " << endl;
    cin >> A >> B >> C;
    double x1 = (-B + (sqrt((B*B) - 4*A*C)))/ (2*A);
    double x2 = (-B - (sqrt((B*B)- 4*A*C)))/ (2*A);
    cout << "El valor de x1 es: " << x1 << " Y el valor de x2 es: " << x2 << endl;
    
    return 0;
}
