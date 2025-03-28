/******************************************************************************
Ejercicio 6
Inicio
    Leer dia 
    switch dia
        caso 0:
            Imprimir "Invalid input"  
            romper
        caso 1:
            Imprimir "Lunes"
            romper
        caso 2:
            Imprimir "Martes"
            romper
        caso 3:
            Imprimir "Miércoles"
            romper
        caso 4:
            Imprimir "Jueves"
            romper
        caso 5:
            Imprimir "Viernes"
            romper
        caso 6:
            Imprimir "Sábado"
            romper
        caso 7:
            Imprimir "Domingo"
            romper
        default:
            Imprimir "Invalid input"  
    Fin switch
Fin


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int day=0;
    cout << "Ingresa el numero del dia: " << endl;
    cin >> day;
    string primero= "Lunes";
    string segundo= "Martes";
    string tercero= "Miercoles";
    string cuarto= "Jueves";
    string quinto= "Viernes";
    string sexto= "Sabado";
    string septimo= "Domingo";
    if( day == 1 ){
        cout << primero << endl;
    }
    else if( day == 2 ){
        cout << segundo << endl;
    }
    else if( day == 3 ){
        cout << tercero << endl;
    }
    else if( day == 4 ){
        cout << cuarto << endl;
    }
    else if( day == 5 ){
        cout << quinto << endl;
    }
    else if( day == 6 ){
        cout << sexto << endl;
    }
    else if( day == 7 ){
        cout << septimo << endl;
    }
    else {
        cout << "Invalid input" << endl;
    
    }
    
    
    return 0;
}
