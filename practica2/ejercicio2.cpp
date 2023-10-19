/**
 * @file ejercicio2.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que calcula el valor n de la serie f(n) = 1+2+3+4+...+n
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
    // Pedimos al usuario el valor de n
    cout << "Introduce el valor de n: ";
    cin >> n;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Implementamos la serie f(n)=1+2+3+4+...+n
    for(int i=1; i<=n;i++){
        suma += i;
    }    
    // Imprimimos el valor de n
    cout << "El valor de n es: " << suma << endl;
    return 0;
 }