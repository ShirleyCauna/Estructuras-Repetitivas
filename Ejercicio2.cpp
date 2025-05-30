//2. Leer números por teclado hasta introducir uno negativo; en ese momento imprimir “Fin de la captura” y terminar.

#include<iostream>
using namespace std;

int main(){
	int num;
    do {
        cout << "Ingrese un numero: ";
        cin >> num;
    } while (num >= 0);

    cout << "Fin de la captura" << endl;
	return 0;
}
