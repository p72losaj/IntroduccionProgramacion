/**
 * @file ejercicio9.cpp
 * @author Jaime Lorenzo Sanchez
 * @brief Implemente un programa que pida numeros al usuario hasta que la media de
        los mismos sea menor que 30.
        Usa while o do-while
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>
 using namespace std;
 int main(){
    float valor, suma=0, media=0, contador=1;
    // Pedimos numeros al usuario mientras que la media sea inferior que 30
    while(media < 30){
        cout << "Introduzca un valor: ";
        cin >> valor;
        cin.ignore(); // Limpiamos el buffer de entrada
        // Calculamos la media de los valores introducidos
        suma += valor;
        media = suma / contador;
        // Incrementamos en 1 el contador        
        contador++;
    }
    // Imprimimos por pantalla el valor medio
    cout << "El valor medio de los valores introducidos es: " << media << endl;
    return 0;
 }