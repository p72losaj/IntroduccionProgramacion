/**
 * @file ejercicio5.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que lee un numero entero e indique si es mayor, menor o igual que 0.
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;
int main(){
    float valor;
    cout << "Introduce un numero: ";
    cin >> valor;
    cin.ignore(); // Limpiar el buffer de entrada
    if(valor > 0){
        cout << "El numero es mayor que 0" << endl;
    } else if(valor == 0){
        cout << "El numero es igual que 0" << endl;
    } else {
        cout << "El numero es menor que 0" << endl;
    }
    return 0;
}