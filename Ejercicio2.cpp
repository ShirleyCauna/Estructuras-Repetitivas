//2. Leer n�meros por teclado hasta introducir uno negativo; en ese momento imprimir �Fin de la captura� y terminar.

#include<iostream>
using namespace std;

int main(){
	int num;
    // Repetir la lectura mientras el n�mero ingresado sea mayor o igual a 0
    do {
        // Solicita al usuario que ingrese un n�mero
        cout << "Ingrese un numero: ";
        cin >> num;
    } while (num >= 0); // Si el n�mero es negativo, termina el ciclo

    // Mensaje de finalizaci�n
    cout << "Fin de la captura" << endl;
	return 0;
}
