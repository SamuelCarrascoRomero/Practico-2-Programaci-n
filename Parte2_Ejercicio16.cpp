/******************************************************************************

Ejercicio 16
Inicio
    Leer inicio, fin

    Si inicio < 0 o inicio > 24 o fin < 0 o fin > 24 Entonces
        Imprimir "Las horas deben estar entre 0 y 24!"
    Sino Si inicio == fin Entonces
        Imprimir "Que extraño, no has alquilado tu bicicleta por mucho tiempo!"
    Sino Si fin < inicio Entonces
        Imprimir "Que extraño, el inicio del alquiler es después del final..."
    Sino
        horas_1 <- 0
        horas_2 <- 0
        monto_total <- 0

        Si inicio < 7 Entonces
            Si fin <= 7 Entonces
                horas_1 <- fin - inicio
                monto_total <- horas_1 * 1
            Sino
                horas_1 <- 7 - inicio
                horas_2 <- fin - 7
                monto_total <- horas_1 * 1 + horas_2 * 2
            Fin Si
        Sino Si inicio >= 7 y inicio < 17 Entonces
            Si fin <= 17 Entonces
                horas_2 <- fin - inicio
                monto_total <- horas_2 * 2
            Sino
                horas_2 <- 17 - inicio
                horas_1 <- fin - 17
                monto_total <- horas_2 * 2 + horas_1 * 1
            Fin Si
        Sino Si inicio >= 17 Entonces
            horas_1 <- fin - inicio
            monto_total <- horas_1 * 1
        Fin Si

        Imprimir "Has alquilado una bicicleta por"
        Si horas_1 > 0 Entonces
            Imprimir horas_1 + " hora(s) con el tarifario de 1 boliviano(s)"
        Fin Si
        Si horas_2 > 0 Entonces
            Imprimir horas_2 + " hora(s) con el tarifario de 2 boliviano(s)"
        Fin Si
        Imprimir "El monto total a pagar es de " + monto_total + " boliviano(s)."
    Fin Si
Fin


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double start, finish;
    cout << "A que hora desea alquilar: " << endl;
    cin >> start >> finish;
    
    if(start < 0|| start > 24 || finish < 0 || finish > 24){
        cout << "Las horas deben estar entre 0 y 24" << endl;
    }else if(start == finish){
        cout << "Que extrano, ha alquilado la bicicleta por mucho tiempo!" << endl;
    }else if(start > finish){
        cout << "Que extraño, el inicio del alquiler es despues del final..." << endl;
    }
    int horas_tarifa1=0, horas_tarifa2=0;
     if (start < 7 && finish > 7 && finish <= 17) {
        horas_tarifa1 = 7 - start;
        horas_tarifa2 = finish - 7;
    } else if (start < 7 && finish > 17) {
        horas_tarifa1 = (7 - start) + (finish - 17);
        horas_tarifa2 = 10;
    } else if (start < 17 && finish > 17) {
        horas_tarifa1 = finish - 17;
        horas_tarifa2 = 17 - start;
    } else if ((start >= 0 && finish <= 7) || (start >= 17 && finish <= 24)) {
        horas_tarifa1 = finish - start;
    } else if (start >= 7 && finish <= 17) {
        horas_tarifa2 = finish - start;
    }
    
    int costo = horas_tarifa1 * 1 + horas_tarifa2 * 2;
    
    cout << "\nHas alquilado una bicicleta por" << endl;
    if (horas_tarifa1 > 0)
        cout << horas_tarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    if (horas_tarifa2 > 0)
        cout << horas_tarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    cout << "\nEl monto total a pagar es de " << costo << " boliviano(s)." << endl;
    
    return 0;
}
