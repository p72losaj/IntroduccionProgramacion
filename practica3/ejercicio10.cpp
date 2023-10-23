/**
 * @file ejercicio10.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que genere un numero secreto entre 0 y 1000.
        El usuario tendra que acertar el numero secreto.
        Para cada numero introducido por el usuario, se debera indicar si este es
        menor, mayor o igual al numero secreto.
        El programa finalizara cuando el usuario acierte el numero secreto.
 * @version 0.1
 * @date 2023-10-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 #include <ctime>
 using namespace std;
 int main(){
    srand(time(NULL)); // Inicio semilla aleatoria
    int numSecret = rand() % 1000 + 1, valor; // Numero secreto
    // Pedimos al usuario un valor
    cout << "Introduzca un valor: ";
    cin >> valor;
    cin.ignore(); // Limpiamos el buffer de entrada
    while(numSecret != valor){
        // Caso 1: el numero introducido es menor al numero secreto
        if(valor < numSecret){
            cout << "El numero introducido es menor al numero secreto" << endl;
            // Pedimos un nuevo valor al usuario
            cout << "Introduzca un nuevo valor: ";
            cin >> valor;
            cin.ignore(); // Limpiamos el buffer de entrada
        }else if(valor > numSecret){ 
            // Caso 2: El numero introducido es mayor que el numero secreto
            cout << "El numero introducido es mayor que el numero secreto" << endl;
            // Pedimos un nuevo valor al usuario
            cout << "Introduzca un nuevo valor: ";
            cin >> valor;
            cin.ignore(); // Limpiamos el buffer de entrada
        }
    }
    // Caso 0: El usuario ha acertado el numero secreto
    cout << "El usuario ha acertado el numero secreto" << endl;
    return 0;
 }