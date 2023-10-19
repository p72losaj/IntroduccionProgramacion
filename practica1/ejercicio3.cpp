/**
 * @file ejercicio3.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que calcula la raiz cuadrada de un numero. 
            Imprime error si el numero no es positivo.
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 #include <iostream>
 #include <cmath>
 using namespace std;

int main(){
    float valor;
    cout << "Introduce un numero: ";
    cin >> valor;
    cin.ignore(); // Limpiamos el buffer de entrada
    if(valor < 0){
        cout << "Error, el numero debe ser positivo" << endl;
        return 1;
    }
    cout << "La raiz cuadrada de " << valor << " es " << sqrt(valor) << endl; // sqrt es la funcion que calcula la raiz cuadrada
    return 0;
}