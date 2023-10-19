/**
 * @file ejercicio7.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que indique si un valor introducido por teclado es primo o no
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int valor, nDivisores=0 ;
    // Obtenemos el valor por teclado
    cout << "Introduzca un valor: ";
    cin >> valor;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Calculamos los divisores del valor
    for(int i=valor; i>=1; i--){
        // Comprobamos si el valor actual es divisor de n
        if( (valor % i) == 0){
            nDivisores++;
        }
        // Comprobamos si el valor no es primo
        if(nDivisores > 2){
            cout << "El valor indicado no es primo" << endl;
            return 0;
        }
    }
    cout << "El valor indicado es primo" << endl;
    return 0;
 }