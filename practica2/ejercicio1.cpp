/**
 * @file ejercicio1.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que calcule la media de un conjunto de datos pedidos por teclado.
            Se pediran datos hasta que el dato introducido sea menor o igual que 0.
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    float valor = 1, suma=0, nValores=0, media = 0;
    // Pedimos el dato
    while(valor > 0){
        cout << "Introduce un valor: ";
        cin >> valor;
        cin.ignore(); // Limpiamos el buffer de entrada
        if( valor > 0){
            suma += valor; // Sumatorio de los valores introducidos por teclado
            nValores++; // Aumentamos el numero de valores introducidos por teclado
        }
    }
    cout << "El valor medio calculado es: " << suma/nValores << endl; // Calculamos la media

    return 0;
 }