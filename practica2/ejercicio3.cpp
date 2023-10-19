/**
 * @file ejercicio3.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que calcule el factorial de un numero introducido por teclado
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int valor, producto=1;
    // Leemos el numero introducido por teclado
    cout << "Introduce un numero: ";
    cin >> valor;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Calculamos el factorial del numero
    for(int i=2; i<=valor; i++){
        producto *= i;
    }
    // Imprimimos el factorial del numero
    cout << "Factorial del numero: " << producto << endl;
    return 0;
 }