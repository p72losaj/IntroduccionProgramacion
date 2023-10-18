/**
 * @file ejercicio12.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que lea un numero entero que represente un dia de la semana.
        Si el numero entero no esta en el rango [1,7], el programa imprime un mensaje de error.
        Si el numero entera esta en el rango [1,7], el programa imprime el dia de la semana.
        Emplee swith.
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 #include <cmath>
 using namespace std;
 int main(){
    int valor;
    // Introducimos el valor entero por teclado
    cout << "Introduce el valor del dia de la semana: ";
    cin >> valor;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Mensaje de error
    if( (valor < 1) || (valor > 7)){
        cout << "Error. El numero entero no esta en el rango [1,7]" << endl;
        return 0;
    }
    // Imprimimos el dia de la semana usando swith
    else{
        switch(valor){
            case 1: {
                cout << "El dia indicado es lunes" << endl;
            }break;
            case 2: {
                cout << "El dia indicado es martes" << endl;
            }break;
            case 3: {
                cout << "El dia indicado es miercoles" << endl;
            }break;
            case 4: {
                cout << "El dia indicado es jueves" << endl;
            }break;
            case 5: {
                cout << "El dia indicado es viernes" << endl;
            }break;
            case 6: {
                cout << "El dia indicado es sabado" << endl;
            }break;
            case 7: {
                cout << "El dia indicado es domingo" << endl;
            }break;
        }
    }
    return 1;
 }