// Valor en radianes de un angulo expresado en grados.
#include <iostream>
using namespace std;
int main(){
    float angulo;
    cout << "Introduzca el valor del angulo en grados: ";
    cin >> angulo;
    cin.ignore();
    cout << "El valor del angulo en radianes es: " << angulo*3.141592/180 << endl;
    return 0;
}