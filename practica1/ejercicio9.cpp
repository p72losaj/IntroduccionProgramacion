/**
 * @file ejercicio9.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que reciba un entero indicando un mes e imprima el numero de dias
            de dicho mes.
 * @version 0.1
 * @date 2023-10-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 
 int main(){
    int valor;
    cout << "Introduzca el valor entero del mes: ";
    cin >> valor;
    cin.ignore(); // Limpiamos el buffer de entrada
    // Error: Valor fuera del rango (1-12)
    if( (valor < 1) || (valor > 12)){
        cout << "Error. El valor introducido no pertenece a ningun mes" << endl;
        return 0;
    }
    // Mes con 31 dias
    if ( (valor == 1) || (valor==3) || (valor==5) || (valor==7)||(valor==8)||(valor==10)||(valor==12) ){
        cout << "El mes tiene 31 dias" << endl;
        return 1;
    }
    // Mes con 30 dias
    else if( (valor==4)||(valor==6)||(valor==9)||(valor==11)){
        cout << "El mes tiene 30 dias" << endl;
        return 1;
    }
    // Mes de febrero, con 28 o 29 dias
    else{
        cout << "El mes tiene 29 dias, excepto en año bisiesto, que tiene 29 dias" << endl;
        return 1;
    }
    return 1;
 }
