// Area de una circunferencia conocido su radio. Puede usar 3.1415 como valor de pi
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float radio, pi=3.1415;
    cout << "Introduzca el radio de la circunferencia en cm: ";
    cin >> radio;
    cin.ignore();
    cout << "Area de la circunferencia: " << pow(radio,2) * pi << " cm^2" << endl;
    return 0;
}