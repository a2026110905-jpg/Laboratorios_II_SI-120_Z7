#include <iostream>
#include <string>
using namespace std;
int cantidad_letras;
string nombre, apellido, nombrecompleto;
void registrar(string &nombre, string &apellido){
    cout << "Ingrese el nombre de estudiante: ";
    cin >> nombre;
    cout << "Ingrese el apellido de estudiante: ";
    cin >> apellido;
}
string unir(string nombre, string apellido){
    return nombre + ' ' + apellido;
}
int contar(string nombrecompleto){
    return nombrecompleto.size();
}
void mostrar(string nombrecompleto, int cantidad_letras){
    cout << "Nombre completo: " << nombrecompleto << "\n";
    cout << "Numero de letras: " << cantidad_letras;
}
int main(){
    registrar(nombre, apellido);
    nombrecompleto = unir(nombre, apellido);
    cantidad_letras = contar(nombrecompleto);
    mostrar(nombrecompleto, cantidad_letras);
    return 0;
}