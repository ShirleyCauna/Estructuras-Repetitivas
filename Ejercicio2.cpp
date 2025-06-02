//2. Leer n�meros por teclado hasta introducir uno negativo; en ese momento imprimir �Fin de la captura� y terminar.
// Nota: Este programa no valida entradas no num�ricas. Si el usuario ingresa texto en lugar de un n�mero, el comportamiento ser� inesperado.

#include<iostream>
using namespace std;

int main(){
    int num;
    // Repetir la lectura mientras el n�mero ingresado sea mayor o igual a 0
    do {
        // Solicita al usuario que ingrese un n�mero
        cout << "Ingrese un numero: ";
        cin >> num;

        // Validaci�n adicional (informativa) si se ingresa un n�mero negativo
        if (num < 0) {
            cout << "N�mero negativo detectado, se finalizar� la captura." << endl;
        }

    } while (num >= 0); // Si el n�mero es negativo, termina el ciclo

    // Mensaje de finalizaci�n
    cout << "Fin de la captura" << endl;
	return 0;
}
