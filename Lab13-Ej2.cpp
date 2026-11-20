#include <iostream>
#include <string>
using namespace std;
int cantidad_letras;
string texto;
void leerMensaje(string &texto){
    cout << "Escriba un texto: ";
    getline(cin, texto);
}
int contarLetras(string texto){
    return texto.size();
}
void mostrarCantiadad(int cantidad_letras){
    cout << "Cantidad de caracteres: " << cantidad_letras;
}
int main(){
    leerMensaje(texto);
    cantidad_letras = contarLetras(texto);
    mostrarCantiadad(cantidad_letras);
    return 0;
}