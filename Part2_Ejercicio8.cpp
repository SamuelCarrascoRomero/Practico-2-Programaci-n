/******************************************************************************

Ejercico 8


Inicio
    Leer segundos

    Si segundos < 0 Entonces
        Imprimir "Error: Input seconds cannot be negative"
    Sino
        horas <- segundos // 3600
        minutos <- (segundos % 3600) // 60
        segundos_restantes <- segundos % 60
        Imprimir horas: minutos: segundos_restantes
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int second=0;
   
    
    cout << "Ingresar los segundos: " << endl;
    cin >> second;
    
    if(second<0){
        cout << "Input seconds cannot be negative." << endl;
    }
    else {
        int h=second/3600;
        int m=(second%3600)/60;
        int s=second % 60;
    
    if (h < 10){
        cout << "0" << h << ":" ;
    }
    if (m < 10){
        cout << "0" << m << ":";
    }
    if (s < 10){
        cout << "0" << s << endl;
    }
    if (s > 10){
        cout << s << endl;
    }
    }
    return 0;
}
