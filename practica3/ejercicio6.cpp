/**
 * @file ejercicio2.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa, usando for, que lea numeros por teclado hasta
        que el usuario introduzca un valor menor que 0.
        El programa debera indicar el mayor de los valores introducidos
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int mayor=-9999;
    // Leemos valores hasta introducir un valor menor que 0
    for(int i=0; i>=0;){
        cout << "Introduzca un valor entero: ";
        cin >> i;
        cin.ignore(); // Limpiamos el buffer de entrada
        // Modificamos el valor mayor en caso de ser necesario
        if(mayor < i){
            mayor = i;
        }
    }
    // Imprimimos el mayor valor introducido
    cout << "El mayor valor introducido es: " << mayor << endl;
    return 0;
 }