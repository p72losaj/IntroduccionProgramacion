/**
 * @file ejercicio3.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Usando for, implemente un programa que lea numeros naturales e
            indique si es primo o no
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int N, contador=0;
    // Leemos numeros naturales
    cout << "Introduzca un numero natural: ";
    cin >> N;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Caso de error: El numero introducido no es natural
    if(N <= 0){
        cout << "Error. El numero indicado no es un numero natural" << endl;
        return 1;
    }
    // Calculamos el numero de divisores del numero natural introducido por el usuario
    for(int i=1; i<=N; i++){
        // Comprobamos si el valor actual es divisor del numero natural
        if( (N % i) == 0){
            // Incrementamos en 1 el numero de divisores del numero natural 
            contador++;
        }
    }
    // Comprobamos si el numero natural es primo o no
    if(contador == 2){
        cout << "El numero natural introducido es primo" << endl;
    }
    else{
        cout << "El numero natural introducido no es primo" << endl;
    }
    return 0;
 }