#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Variables //
    char Nombre[30];
    int Edad;
    char Carrera[30];
    int Semestre;
    double Promedio_final;
    // Recolección de datos //
    cout << "Ingrese su nombre: ";
    cin >> Nombre;
    cout << "Ingrese su edad: ";
    cin >> Edad;
    cout << "Ingrese su carrera: ";
    cin >> Carrera;
    cout << "Ingrese en que semestre se encuentra: ";
    cin >> Semestre;
    cout << "Ingrese su promedio final: ";
    cin >> Promedio_final;
    // Exibición de datos //
    cout << "Datos ingresados: " << endl;
    cout << "Nombre: "  << Nombre << "." << endl;
    cout << "Edad: " << Edad << "." << endl;
    cout << "Carrera: " << Carrera << "." << endl;
    cout << "Semestre: " << Semestre << "." << endl;
    cout << "Promedio final: " << Promedio_final << "." << endl;
    // Mayoría de edad //
    if (Edad >= 18) {
        cout << "El estudiante es mayor de edad." << endl;
    } else {
        cout << "El estudiante es menor de edad." << endl;}
    if (Promedio_final >= 51) {
        cout << "El estudiante aprobó." << endl;
    } else {
        cout << "El estudiante reprobó." << endl;}
    return 0; }
    