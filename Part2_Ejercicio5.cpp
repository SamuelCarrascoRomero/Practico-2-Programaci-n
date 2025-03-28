/******************************************************************************
Ejercicio 5
Inicio
    Leer caracter 

    Si caracter es letra mayúscula Entonces
        Imprimir "upper-case alphabet"
    Sino Si caracter es letra minúscula Entonces
        Imprimir "lower-case alphabet"
    Sino
        Imprimir "not an alphabet"  
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    char letter_1;
    cin >> letter_1;
    if( 65 <= letter_1 && letter_1 <= 90 ){
        cout << "upper-case alphabet" << endl;
    }
    else if(97 <= letter_1 && letter_1 <=122){
        cout << "lower-case alphabet" << endl;
    }
    else{
        cout << "not an alphabet" << endl;
    }
    return 0;
}
