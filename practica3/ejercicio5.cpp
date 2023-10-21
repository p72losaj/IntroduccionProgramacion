/**
 * @file ejercicio1.cpp
 * @author jaime Lorenzo Sanchez
 * @brief Implemente un programa que pida 15 numeros por teclado e imprima el menor.
            Usa la estructura de control iterativa for
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int a, menor=9999;
    // Pedimos 15 numeros por teclado
    for(int i=1; i<=15; i++){
        cout << "Introduzca un valor entero: ";
        cin >> a;
        cin.ignore(); // Limpiamos el buffer de entrada
        // Actualizamos el valor menor en caso de ser necesario
        if(a < menor){
            menor = a;
        }
        
    }
    // Imprimimos el valor menor
    cout << "El menor valor introducido es: " << menor << endl;
    return 0;
 }