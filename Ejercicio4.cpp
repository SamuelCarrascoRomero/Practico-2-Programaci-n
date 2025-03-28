/******************************************************************************

Ejercico 4 
Inicio
    Declarar x, y, z como enteros
    Leer x
    Leer y
    Asignar 1 a z
    Imprimir "Your answer: " seguido de la suma de x + y + z
Fin
.

*******************************************************************************/
#include <iostream>
 using namespace std;
int main() {
    int x, y=0;
    cin >> x;
    cin >> y;
    int z = 1;
    cout << "Your answer: "<< endl;
    cout << x + y + z << endl;
    
    return 0;
}
