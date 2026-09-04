#include <iostream>
#include <string>
std::string nombre;
std::string categoria;
float servicio;
float agua_consumida;
float minimo = 1.2;
float domestico = 2.5;
float comercial = 4;
float industrial =6.5;
int main (){
    std::cout << "Ingrese su nombre: " << std::endl;
    std::cin >> nombre;
    std::cout << "Ingrese los metros cubicos consumidos:" << std::endl;
    std::cin >> agua_consumida;
    if (0 < agua_consumida && agua_consumida <= 15){
        categoria ="Consumo minimo";
        float costo= servicio+(agua_consumida*minimo);
        std::cout << "---RESUMEN---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Tarifa fija: " << servicio << std::endl;
        std::cout << "Total a pagar: " << costo << std::endl;
    }
    else if (15 < agua_consumida && agua_consumida <= 35){
        categoria ="Consumo domestico";
        float costo= servicio+(agua_consumida*domestico);
        std::cout << "---RESUMEN---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Tarifa fija: " << servicio << std::endl;
        std::cout << "Total a pagar: " << costo << std::endl;
    }
    else if (35 < agua_consumida && agua_consumida <= 70){
        categoria ="Consumo comercial";
        float costo= servicio+(agua_consumida*comercial);
        std::cout << "---RESUMEN---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Tarifa fija: " << servicio << std::endl;
        std::cout << "Total a pagar: " << costo << std::endl;
    }
    else if (agua_consumida > 70){
        categoria ="Consumo industrial";
        float costo= servicio+(agua_consumida*industrial);
        std::cout << "---RESUMEN---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Tarifa fija: " << servicio << std::endl;
        std::cout << "Total a pagar: " << costo << std::endl;
    }
return 0;
}