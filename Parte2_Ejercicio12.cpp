/******************************************************************************
Ejercicio 12
Inicio
    Leer color1, pisos1, color2, pisos2, color3, pisos3, color, pisos_testigo

    Si color == "?" Entonces
        color <- ""
    Fin Si

    Si pisos_testigo == -1 Entonces
        pisos_testigo <- -1
    Fin Si

    Si color == "" y pisos_testigo == -1 Entonces
        Si color1 == color y pisos1 == pisos_testigo Entonces
            Imprimir 1
        Fin Si

        Si color2 == color y pisos2 == pisos_testigo Entonces
            Imprimir 2
        Fin Si

        Si color3 == color y pisos3 == pisos_testigo Entonces
            Imprimir 3
        Fin Si
    Fin Si

Fin



*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    string c1, c2, c3, ct;
    int p1, p2, p3, pt;

    cin >> c1 >> p1 >> c2 >> p2 >> c3 >> p3;
    
    cin >> ct >> pt;

    if ((ct == "?" || ct == c1) && (pt == -1 || pt == p1)) {
        cout << "1" << endl;
    }
    
    if ((ct == "?" || ct == c2) && (pt == -1 || pt == p2)) {
        cout << "2" << endl;
    }
    
    if ((ct == "?" || ct == c3) && (pt == -1 || pt == p3)) {
        cout << "3" << endl;
    }

    return 0;
}
