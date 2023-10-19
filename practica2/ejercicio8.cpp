/**
 * @file ejercicio8.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que imprima los primeros n terminos de la sucesion de Fibonacci
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int nValores, num1=0, num2=1, num3=1;
    // Leemos el numero de elementos de la serie de Fibonacci
    cout << "Introduzca el numero de elementos de la serie de Fibonacci: ";
    cin >> nValores;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Mostramos la serie de Fibonacci
    cout << "Serie de Fibonacci: ";
    for( int i=1; i <= nValores; i++){
        num3 = num1 + num2;
        cout << num3 << " ";
        num1 = num2; 
        num2 = num3;
    }
    cout << endl;
    return 0;
 }