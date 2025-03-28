/******************************************************************************
Ejercicio 14

Inicio
    Leer num_documentos

    Si num_documentos == 0 Entonces
        Imprimir "No se encontraron documentos"
    Sino Si num_documentos == 1 Entonces
        Imprimir "Se encontro un documento"
    Sino
        Imprimir num_documentos + " documentos encontrados"
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Ingrese el numero de documento: " << endl;
    cin >> number;
    if(number == 0){
        cout << "No se encontraron documentos" << endl;
    }else if(number == 1){
        cout << number << " Se encontro un documento" << endl;
    }else {
        cout << number << " documentos encontrados" << endl;
    }

    return 0;
}
