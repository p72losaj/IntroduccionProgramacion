/**
 * @file ejercicio4.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que calcule la suma de los numeros impares hasta el numero n indicado
            por el usuario.
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    int n,suma=0;
    // Leemos el valor de n
    cout << "Introduce un numero: ";
    cin >> n;
    cin.ignore(); // Limpiamos el buffer de entrada
    for(int i=1; i <= n; i++){
        // Comprobamos si el valor actual es impar
        if( (i % 2) != 0){
            suma += i;
        }
    }
    // Imprimimos la suma de los numeros impares
    cout << "Suma de los valores impares hasta el valor indicado: " << suma << endl;
    return 0;
 }