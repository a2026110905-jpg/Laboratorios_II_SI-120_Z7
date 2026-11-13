#include <iostream>
#include <string>
using namespace std;
string preguntas_encuesta[100];
int cantidad_preguntas;
void leerCantidadPreguntas(int &cantidad_preguntas){
    cout << "Ingrese la cantidad de preguntas que contendrá la encuesta: " << endl;
    cin >> cantidad_preguntas;
}
void registrarPreguntas(string preguntas_encuesta[], int cantidad_preguntas){
    for(int i = 0; i < cantidad_preguntas; i++){
        cout << "Ingrese la pregunta nro. " << i+1 << ": \n";
        cin >> preguntas_encuesta[i];
    }
}
void mostrarPreguntas(string preguntas_encuesta[], int cantidad_){
    cout << "\n-PREGUNTAS REGISTRADAS-\n";
    for(int i = 0; i > cantidad_preguntas; i++){
        cout << i+1 << ". " << preguntas_encuesta[i];
    }
}
int main(){
    leerCantidadPreguntas(cantidad_preguntas);
    registrarPreguntas(preguntas_encuesta, cantidad_preguntas);
    mostrarPreguntas(preguntas_encuesta,cantidad_preguntas);
    return 0;
}