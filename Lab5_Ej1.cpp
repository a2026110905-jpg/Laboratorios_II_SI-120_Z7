#include <iostream>
char destino;
float tarifa_destino;
float peso_paquete;
float tarifa_kg;
float precio_envio;
using namespace std;
int main(){
    do{
    cout << "====================================" << endl;
    cout << "SISTEMA DE CALCULO DE COSTO DE ENVIO" << endl;
    cout << "====================================" << endl;
    cout << "Por favor, indique el destino escribiendo la letra asignada a esta: " << endl;
    cout << "[L] La Paz/El Alto" << endl;
    cout << "[C] Cochabamba" << endl;
    cout << "[S] Santa Cruz" << endl;
    cout << "De no necesitar el sitema, escriba [X] para salir." << endl;
    cin >> destino;
    switch(destino){
        case 'L': 
        case 'l':
        tarifa_destino=7.00;
        tarifa_kg=3.00;
        break;
        case 'C':
        case 'c':
        tarifa_destino=5.00;
        tarifa_kg=2.00;
        break;
        case 'S':
        case 's':
        tarifa_destino=8.00;
        tarifa_kg=4.00;
        case 'X':
        case 'x':
        cout << "Cerrando sistema... ¡Hasta luego!" << endl;
        default:
        cout << "Opcion invalida. Seleccione otra opcion." << endl;
    }
    cout << "Introduzca el peso del paquete: " << endl;
    cin >> peso_paquete;
    if (peso_paquete>2){
    float kg_extras=peso_paquete-2;
    precio_envio=tarifa_destino+tarifa_kg*kg_extras;
    cout << "El precio por envio es: " << precio_envio << "bs." << endl;
    }
    else{
    precio_envio=tarifa_destino;
    }
    cout << "El precio por envio es: " << precio_envio << "bs." << endl;
    cout << "Regresando al menu..." << endl;
    }while(destino!='x'&&destino!='X');
return 0;
}
