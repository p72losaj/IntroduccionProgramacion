/**
 * @file ejercicio4.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implementa un programa que lea un dia de la semana (1-7) e imprime si es dia laborable o fin de semana. 
            Imprime error si el numero no pertenece al rango.
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 #include <iostream>
 using namespace std;
 int main(){
    int dia;
    cout << "Introduce un dia de la semana (1-7): ";
    cin >> dia;
    cin.ignore(); // Limpiamos el buffer de entrada
    if( (dia < 1) || (dia > 7) ){
        cout << "Error: El numero introducido no pertenece al rango (1-7)" << endl;
    }else if( (dia >= 1) && (dia <= 5) ){
        cout << "Es un dia laborable" << endl;
    }
    else{
        cout << "Es fin de semana" << endl;
    }
    return 1;
 }