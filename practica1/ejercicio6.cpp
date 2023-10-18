/**
 * @file ejercicio6.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que pida 4 numeros reales y calcule la media
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    float num, suma=0;
    for(int i=0; i<4; i++){
        cout << "Introduzca un numero: ";
        cin >> num;
        cin.ignore(); // Limpiamos el buffer
        suma += num;
    }
    cout << "La media es: " << suma/4 << endl;
    return 1;
 }