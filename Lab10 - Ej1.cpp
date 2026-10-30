#include <iostream>
#include <iomanip>
using namespace std;
int cantidad_estudiantes;
float notas[100];

void leerCantidadEstudiantes(int &cantidad_estudiantes){
    cout << "Ingrese la cantidad de estudiantes del grupo: ";
    cin >> cantidad_estudiantes;
}
void leerNotasEstudiantes(float notas[], int cantidad_estudiantes){
    for(int i = 0; i < cantidad_estudiantes; i++){
        cout << "Ingrese la nota del estudiantes Nro." << i + 1 << ": ";
        cin >> notas[i];
    }
}
float calcularPromedioNotas(float notas[], int cantidad_estudiantes){
    float suma_notas = 0;
    for(int i = 0; i < cantidad_estudiantes; i++){
        suma_notas = suma_notas + notas[i];
    }
    return suma_notas/cantidad_estudiantes;
}
float hallarMayorNota(float notas[], int cantidad_estudiantes){
    for(int i = 0; i < cantidad_estudiantes; i++){
        for(int j = i; j < cantidad_estudiantes; j++){
            if(notas[i] > notas[j]){
                float A = notas[i];
                notas[i] = notas[j];
                notas[j] = A;
            }
        }
    }
return notas[0];
}

float hallarMenorNota(float notas[], int cantidad_estudiantes){
    for(int i = 0; i < cantidad_estudiantes; i++){
        for(int j = i; j < cantidad_estudiantes; j++){
            if(notas[i] < notas[j]){
                float A = notas[i];
                notas[i] = notas[j];
                notas[j] = A;
            }
        }
    }
return notas[0];
}

void mostrarNotasEstudiantes(float notas[], float promedio_notas, float mayor_nota, float menor_nota){
    cout << " " << endl;
    cout << "RESULTADOS" << endl;
    for(int i =0; i < cantidad_estudiantes; i++){
        cout << setw(4) << notas[i];
    }
    cout << " " << endl;
    cout << "Promedio general: " << promedio_notas << endl;
    cout << "Nota mayor: " << mayor_nota << endl;
    cout << "Nota menor: " << menor_nota << endl;
}

int main(){
    leerCantidadEstudiantes(cantidad_estudiantes);
    leerNotasEstudiantes(notas, cantidad_estudiantes);
    float promedio_notas = calcularPromedioNotas(notas, cantidad_estudiantes);
    float mayor_nota = hallarMayorNota(notas, cantidad_estudiantes);
    float menor_nota = hallarMenorNota(notas, cantidad_estudiantes);
    mostrarNotasEstudiantes(notas, promedio_notas, mayor_nota, menor_nota);
    return 0;
}