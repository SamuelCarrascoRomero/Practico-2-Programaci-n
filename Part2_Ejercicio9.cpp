/******************************************************************************
Ejercicio 9 
Inicio
    Leer palabras
    Dividir palabras en una lista

    primer_caracter <- ""
    Para cada palabra en palabras hacer
        primer_caracter <- primer_caracter + primer caracter de la palabra
    Fin Para

    Imprimir primer_caracter

    Si primer_caracter[0] == primer_caracter[longitud de primer_caracter - 1] Entonces
        Imprimir "Hemos encontrado algo!"
    Sino
        Imprimir "Aun sin suerte"
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    string palabra_1;
    string palabra_2;    
    string palabra_3;
    string palabra_4;
    string palabra_5;
    
    cout << "Ingresa una secuencia de palabras: " << endl;
    cin >> palabra_1 >> palabra_2 >> palabra_3 >> palabra_4 >> palabra_5;
    
    string inicial= "";
    inicial = palabra_1[0] + inicial;
    inicial = palabra_2[0] + inicial;
    inicial = palabra_3[0] + inicial;
    inicial = palabra_4[0] + inicial;
    inicial = palabra_5[0] + inicial;
    
    cout << inicial << endl;
    
    if(palabra_1[0] == palabra_5[0]){
        cout << "Hemos encontrado algo" << endl;
    }
    else {
        cout << "Aun sin suerte" << endl;
    }
    return 0;
}
