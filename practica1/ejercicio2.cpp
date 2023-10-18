/**
 * @file ejercicio2.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implementa un programa que calcule el valor en radianes de un angulo expresado en grados.
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;
int main(){
    float angulo;
    cout << "Introduzca el valor del angulo en grados: ";
    cin >> angulo;
    cin.ignore(); // Limpiamos el buffer de entrada
    cout << "El valor del angulo en radianes es: " << angulo*3.141592/180 << endl;
    return 1;
}