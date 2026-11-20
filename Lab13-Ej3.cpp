#include <iostream>
#include <string>
using namespace std;
int posicion_texto;
string texto, texto_buscado;
void leerMensaje(string &texto, string &texto_buscado){
    cout << "Escriba un texto: ";
    getline(cin, texto);
    cout << "Texto a buscar: ";
    getline(cin,texto_buscado);
}
void buscarPalabra(string texto, string texto_buscado){
    int condicion = texto.find(texto_buscado);
    if(condicion != (-1)){
        cout << "Posicion" << condicion;
    }
    else{
        cout << "PALABRA NO ENCONTRADA";
    }
}
int main(){
    leerMensaje(texto,texto_buscado);
    buscarPalabra(texto, texto_buscado);
    return 0;
}