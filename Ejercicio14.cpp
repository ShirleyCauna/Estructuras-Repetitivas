//14. Diseñar un algoritmo que realice la división de dos números enteros positivos utilizando restas sucesivas. El programa deberá calcular cuántas veces se puede restar el divisor del dividendo antes de que el resultado sea menor que el divisor.

#include <iostream>
using namespace std;

int main() {
    int dividendo, divisor, cociente = 0;

    cout << "Ingrese el dividendo: ";
    cin >> dividendo;
    cout << "Ingrese el divisor: ";
    cin >> divisor;

    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }

    cout << "Cociente: " << cociente << endl;
    return 0;
}
