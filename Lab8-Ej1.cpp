#include <iostream>
using namespace std;
char condicion_continuidad;
int cantidad_evaluaciones = 0;
float nota_evaluacion;
float suma_notas_evaluaciones = 0;

void leerNotas(float &nota_evaluacion,float &suma_notas_evaluaciones, int &cantidad_evaluaciones);
float procesarNotas(int cantidad_evaluaciones, float suma_notas_evaluaciones);
void mostrarResultados(float promedio_notas);

int main(){
    cout << "-------------------------" << endl;
    cout << "|   REGISTRO DE NOTAS   |" << endl;
    cout << "-------------------------" << endl;
    cout << ' ' << endl;
    leerNotas(nota_evaluacion, suma_notas_evaluaciones, cantidad_evaluaciones);
    if(cantidad_evaluaciones == 0){
        cout << "El estudiante no dio ninguna evaluacion." << endl;
        cout << "El estudiante REPROBO ." << endl;}
    else{
    float promedio_notas = procesarNotas(cantidad_evaluaciones, suma_notas_evaluaciones);
    mostrarResultados(promedio_notas);
    }
    return 0;
}

void leerNotas(float &nota_evaluacion, float &suma_notas_evaluaciones, int &cantidad_evaluaciones){
    cout << "Ingrese cuantas evaluaciones a realizado el estudiante: ";
    cin >> cantidad_evaluaciones;
    for(int i = 1; i <= cantidad_evaluaciones; i++){
        do{
        cout << "Ingrese la nota de la evaluacion Nro " << i << ": ";
        cin >> nota_evaluacion;
        if(nota_evaluacion<0 || nota_evaluacion > 100){
            cout << "VALOR INVALIDO. INGRESE OTRO VALOR." << endl;
        } 
        }while(nota_evaluacion<0 || nota_evaluacion > 100);
        suma_notas_evaluaciones = suma_notas_evaluaciones + nota_evaluacion;
    }
}

float procesarNotas(int cantidad_evaluaciones, float suma_notas_evaluaciones){
    float promedio_notas = suma_notas_evaluaciones/cantidad_evaluaciones;
    return promedio_notas;
}

void mostrarResultados(float promedio_notas){
    cout << "--------------------------" << endl;
    cout << "|       RESULTADOS       |" << endl;
    cout << "--------------------------" << endl;
    cout << ' ' << endl;
    cout << "Promedio de las evaluaciones: " << promedio_notas << endl;
    if(promedio_notas <= 51){
        cout << "El estudiante REPROBO." << endl;
    }
    else{
        cout << "El estudiante APROBO." << endl;
    }
}