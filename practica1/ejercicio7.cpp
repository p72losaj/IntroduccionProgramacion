/**
 * @file ejercicio7.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que calcule la nota final de un alumno.
            La nota final se calcula en funcion de 3 notas:
            1- La nota de practicas que cuenta un 25% del total.
            2- La nota de un parcial que cuenta un 25% del total.
            3- La nota de un examen final que cuenta un 50% del total.
 * @version 0.1
 * @date 2023-10-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    float notaPracticas, notaParcial, notaExamen, notaFinal=0;
    cout << "Introduzca la nota de practicas: ";
    cin >> notaPracticas;
    cin.ignore(); // Limpiamos el buffer de entrada
    cout << "Introduzca la nota del parcial: ";
    cin >> notaParcial;
    cin.ignore(); // Limpiamos el buffer de entrada
    cout << "Introduzca la nota del examen final: ";
    cin >> notaExamen;
    cin.ignore(); // Limpiamos el buffer de entrada
    cout << "La nota final es: " << (notaPracticas*0.25)+(notaParcial*0.25)+(notaExamen*0.5) << endl;
    return 1;
 }