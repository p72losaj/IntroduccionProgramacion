/**
 * @file ejercicio10.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implementa un programa que reciba un entero y diga si es par o no.
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int valor;
    cout << "Introduzca un valor entero: ";
    cin >> valor;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Valor es par o impar
    if( (valor % 2 ) == 0){
        cout << "El valor introducido es par." << endl;
    }else{
        cout << "El valor introducido es impar" << endl;
    }
    return 1;
 }