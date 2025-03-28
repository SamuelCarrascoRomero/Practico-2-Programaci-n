/******************************************************************************

Ejercicio 4
Inicio
    Leer N, A, B, X, Y  
    Si N > B Entonces
        costo_final <- N * (1 - Y / 100)  
    Sino Si N > A Entonces
        costo_final <- N * (1 - X / 100)  
    Sino
        costo_final <- N  
    Fin Si
    Imprimir costo_final  
Fin


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    if(N>B){
        N*= (1-Y / 100);
    }
    else if(A<N){
        N*= (1-X / 100);
    }
    cout << N << endl;
    return 0;
}
