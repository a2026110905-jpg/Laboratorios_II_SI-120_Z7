#include <iostream>
using namespace std;
float peso;
float costo;
void leerPeso(float &peso)
{
    cout << "Introdusca el peso de la carta: " << endl;
    cin >> peso;
    if (peso <= 0)
    {
        cout << "PESO NO VALIDO" << endl;
    }
    else if (peso > 500)
    {
        cout << "NO SE PUEDE ENVIAR COMO CARTA" << endl;
    }
}
void calcularCosto(float peso, float &costo)
{
    if (0 < peso && peso <= 50)
    {
        costo = 1.50;
    }
    else if (50 < peso && peso <= 100)
    {
        costo = 4;
    }
    else if (100 < peso && peso <= 200)
    {
        costo = 6;
    }
    else if (200 < peso && peso <= 350)
    {
        costo = 10.5;
    }
    else if (350 < peso && peso <= 500)
    {
        costo = 15;
    }
}
void mostrarResultados(float peso, float costo)
{
    cout << "Costara Bs " << costo << " enviar esta carta";
}
int main(){
    leerPeso(peso);
    if(0< peso && peso <= 500){
        calcularCosto(peso, costo);
        mostrarResultados(peso, costo);
    }
    return 0;
}