#include <iostream>
using namespace std;
float combustible_disponible = 50;
float combustible_gastado, total_combustible_consumido;
int entregas_hechas = 0;
int main(){
    do{
        cout << "Ingrese el combustible consumido: ";
        cin >> combustible_gastado;
        combustible_disponible = combustible_disponible - combustible_gastado;
        total_combustible_consumido += combustible_gastado;
        entregas_hechas += 1;
    } while(combustible_disponible > 10);
    cout << "-------------------------" << endl;
    cout << "| REGISTRO DEL VEHICULO |" << endl;
    cout << "-------------------------" << endl;
    cout << "Cantidad de entragas realizadas: " << entregas_hechas << endl;
    cout << "Total de combustible consumido: " << total_combustible_consumido << endl;
    cout << "Combustible restante: " << combustible_disponible << endl;
    cout << " " << endl;
    cout << "DEBE CARGAR COMBUSTIBLE.";
}