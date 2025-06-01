//1. Diseñar un algoritmo que imprima en la pantalla los primeros “n” múltiplos de 7 (positivos mayores que cero) 

#include<iostream>
using namespace std;

int main(){
    int n, i, m;
    cout<<"Ingrese n: ";
    cin>>n;
    i = 1;
    while(i <= n){
        m = 7*i;
        cout<<"M(7): "<<m<<endl;
        i = i+1;
    }
    return 0;
}

