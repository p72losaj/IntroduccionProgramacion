/**
 * @file ejercicio1.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief  Implementa un programa que calcule el area de una circunferencia conocido su radio. 
            Puede usar 3.1415 como valor de pi.
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float radio, pi=3.1415;
    cout << "Introduzca el radio de la circunferencia en cm: ";
    cin >> radio;
    cin.ignore(); // Limpiamos el buffer de entrada
    cout << "Area de la circunferencia: " << pow(radio,2) * pi << " cm^2" << endl; // pow es la funcion que calcula la potencia de un numero
    return 0;
}