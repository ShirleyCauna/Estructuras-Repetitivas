//13. Realizar la multiplicaci�n de dos n�meros por medio de la definici�n de la multiplicaci�n. (sin usar el operador *). Recuerde 3x4= 3+3+3+3 o 4+4+4

#include<iostream>
using namespace std;

int main(){
 int Prod;
 Prod = 0;
 for(int i=1; i<=4; i++){
 Prod = Prod + 3;
 }
 cout<<Prod;
 return 0;
}

