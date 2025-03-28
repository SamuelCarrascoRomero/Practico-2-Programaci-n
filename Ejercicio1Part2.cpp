/******************************************************************************
Ejercicio 1
Inicio
    Leer str1, str2, str3

    Si str1 < str2 y str1 < str3 Entonces
        Imprimir str1
    Sino Si str2 < str1 y str2 < str3 Entonces
        Imprimir str2
    Sino
        Imprimir str3
Fin


*******************************************************************************/
##include <iostream>
using namespace std;
int main() {
    string a, b, c;
    cin >> a; 
    cin >> b;
    cin >> c;
    if (b < a){
        a = b;
        cout << a << endl;
    }
    else if (c < a){
        a = c;
        cout << a << endl;
    }
    else{
        cout << a << endl;

    }
}
