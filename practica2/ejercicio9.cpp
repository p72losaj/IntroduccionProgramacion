/**
 * @file ejercicio9.cpp
 * @author jaime Lorenzo Sanchez
 * @brief Implemente un programa que calcule la suma de los numeros divisibles entre 2 o 3 hasta
            el valor introducido por el usuario.
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int n, suma=0;
    // Peticion de un valor al usuario por teclado
    cout << "Introduzca un valor: ";
    cin >> n;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Sumatorio de los numeros divisibles entre 2 o 3
    cout << "Numeros divisibles entre 2 o 3: "; 
    for(int i=1; i <= n; i++){
        // Mostramos los numeros divisibles entre 2 o 3
        if( (i % 2 == 0) || (i % 3 == 0)){
            cout << i << " ";
            suma += i;
        }
    }
    cout << endl;
    // Imprimos el valor de la suma
    cout << "Suma de los numeros divisibles entre 2 o 3: " << suma << endl;
    return 0;
 }