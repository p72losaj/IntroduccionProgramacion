/**
 * @file ejercicio11.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que lea dos numeros por teclado y los intercambie
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int a, b, aux;
    // Leemos los dos numeros por teclado
    cout << "Introduzca el valor de a: ";
    cin >> a;
    cin.ignore(); // Limpiamos el buffer de entrada
    cout << "Introduzca el valor de b: ";
    cin >> b;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Intercambiamos los valores
    aux = a;
    a = b;
    b = aux;
    // Mostramos los valores intercambiados
    cout << "El valor de a es:  " << a << endl;
    cout << "El valor de b es: " << b << endl;
    return 0;
 }