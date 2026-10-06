#include <iostream>
float numerador = 1;
int valor_elegido, total_terminos;
float sumatoria = 0;
using namespace std;
int main(){
    cout << "Ingrese un numero entero positivo: " << endl;
    cin >> valor_elegido;
    
    for(float i = 1; i<= valor_elegido; i++)
    {
        sumatoria += (1.0/i);
    }
    cout << "La suma es: " << sumatoria;
    return 0;
}