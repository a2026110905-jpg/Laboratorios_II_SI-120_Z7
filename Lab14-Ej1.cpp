#include <iostream>
#include <string>
using namespace std;
string a;
string b;
int BuscarSubcadena(string a, string b){
    return b.find(a);
}
int main(){
    cout << "Ingrese un texto: ";
    cin >> b;
    cout << "Ingrese la porcion de testo que quiere buscar: ";
    cin >> a;
    int ubicacion_subcadena = BuscarSubcadena(a, b);
    if(ubicacion_subcadena != (-1)){
        cout << "Ubicacion del texto buscado en el texto principal: " << ubicacion_subcadena << endl;
    }
    else{
        cout << "Palabra no encontrada en el texto" << endl;
    }
    return 0;
}