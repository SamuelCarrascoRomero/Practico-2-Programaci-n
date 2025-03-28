/*******************************************************************************
Ejercicio 13
Inicio
    Leer edad, experiencia

    Si edad < 18 Entonces
        Imprimir "No es elegible para ningún puesto"
    Sino
        Si experiencia >= 5 Entonces
            Imprimir "Director de proyecto senior"
        Sino Si experiencia >= 3 Entonces
            Imprimir "Director de proyecto"
        Sino
            Imprimir "Coordinador de proyecto"
    Fin Si
Fin



*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int age;
    int years_of_experience;
    cout<<"Ingrese su edad: " << endl;
    cin >> age;
    cout << "Ingrese sus años de experiencia: " << endl;
    cin >> years_of_experience;
    
    if(age<=18 and years_of_experience < 3){
        cout << "Coordinador de proyecto" << endl;
    } else if(age>18 and years_of_experience < 5){
        cout << "Director de proyecto" << endl;
    } else if(age>18 and years_of_experience >= 5){
        cout << "Director senior" << endl;
    }

    return 0;
}
