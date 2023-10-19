/**
 * @file ejercicio8.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que lea 3 numeros e imprima el mayor de ellos.
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    float a, b, c;
    cout << "Introduzca un numero: ";
    cin >> a;
    cin.ignore(); // Limpiar el buffer
    cout << "Introduzca otro numero: ";
    cin >> b;
    cin.ignore(); // Limpiar el buffer
    cout << "Introduzca otro numero: ";
    cin >> c;
    cin.ignore(); // Limpiar el buffer
    if( (a > b) && (a > c) ){
        cout << "El mayor es: " << a << endl;
    }else if( (b > a) && (b > c) ){
        cout << "El mayor es: " << b << endl;
    }else if( (c > a) && (c > b) ){
        cout << "El mayor es: " << c << endl;
    }else{
        cout << "Los numeros son iguales" << endl;
    }
    return 0;
 }