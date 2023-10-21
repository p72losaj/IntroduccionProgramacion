/**
 * @file ejercicio4.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Usando for, imprimir por pantalla los divisores de un numero en orden
        ascendente
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
    // Pedimos un valor al usuario
    cout << "Introduzca un numero : ";
    cin >> N;
    cin.ignore(); // Limpiamos el buffer de entrada
    cout << "Los divisores del numero introducido son: ";
    // Calculamos el numero de divisores del numero natural introducido por el usuario
    for(int i=1; i<=N; i++){
        // Comprobamos si el valor actual es divisor del numero natural
        if( (N % i) == 0){
            // Imprimimos por pantalla el divisor
            cout << i << "; ";
        }
    }
    cout << endl;
    
    return 0;
 }