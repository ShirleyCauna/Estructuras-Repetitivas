//2. Leer números por teclado hasta introducir uno negativo; en ese momento imprimir “Fin de la captura” y terminar.
// Nota: Este programa no valida entradas no numéricas. Si el usuario ingresa texto en lugar de un número, el comportamiento será inesperado.

#include<iostream>
using namespace std;

int main(){
	int num;
    // Repetir la lectura mientras el número ingresado sea mayor o igual a 0
    do {
        // Solicita al usuario que ingrese un número
        cout << "Ingrese un numero: ";
        cin >> num;
    } while (num >= 0); // Si el número es negativo, termina el ciclo

    // Mensaje de finalización
    cout << "Fin de la captura" << endl;
	return 0;
}
