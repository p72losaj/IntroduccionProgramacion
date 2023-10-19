/**
 * @file ejercicio5.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que imprima los divisores de un numero en orden descendente
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int n;
    // Obtenemos un valor por teclado
    cout << "Introduce el valor del cual desea calcular sus divisores: ";
    cin >> n;
    cin.ignore(); // Limpiamos el valor de n
    cout << "Divisores del valor indicado: " << endl;
    for(int i=n; i>=1; i--){
        // Comprobamos si el valor actual es divisor de n
        if( (n % i) == 0){
            cout << i << ";"; 
        }
    }
    cout << endl;
    return 0;
 }