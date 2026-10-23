#include <iostream>
using namespace std;
int numero, unidades, decimales, centenas, unidades_de_mil;
void leerNumero(int &numero){
    cout << "Ingrese un numero entero menor que 10000: " << endl;
    cin >> numero;
    if(numero < 1 && numero && numero < 10000){
        cout << "Numero no valido";
    }
}
void descomponerNumero(int numero, int &unidades, int &decimales,int &centanas,int &unidades_de_mil){
    unidades = numero%10;
    decimales = (numero/10)%10;
    centanas = (numero/100)%10;
    unidades_de_mil = numero/1000;
}
void mostrarDigitos(int unidades, int decimales, int centenas, int unidades_de_mil){
    cout << "RESULTADOS: " << endl;
    cout << ' ' << endl;
    cout << "Unidades:" << unidades << endl;
    cout << "Decimales: " << decimales << endl;
    cout << "Centenas: " << centenas << endl;
    cout << "Unidades de mil: " << unidades_de_mil << endl;
}
int main(){
    leerNumero(numero);
    if(1 <= numero && numero < 10000){
        descomponerNumero(numero, unidades, decimales, centenas, unidades_de_mil);
        mostrarDigitos(unidades, decimales, centenas, unidades_de_mil);
    }
}