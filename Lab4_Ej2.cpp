#include <iostream>
#include <string>
std::string nombre;
std::string categoria;
float monto;
int bronce = 5;
int plata = 10;
int oro =15;
int main (){
    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese el monto a pagar: ";
    std::cin >> monto;
    if (monto <= 100){
        categoria = "Sin descuento";
        float descuento = 0;
        float total = monto - descuento;
        std::cout << "---RESUMEN DE VENTA---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Subtotal: " << monto << std::endl;
        std::cout << "Descuento aplicado: " << descuento << std::endl;
        std::cout << "Total a pagar: " << total << std::endl;
    }
    if (100 < monto && monto <= 500){
        categoria = "bronce";
        float descuento = (monto*bronce)/100;
        float total = monto - descuento;
        std::cout << "---RESUMEN DE VENTA---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Subtotal: " << monto << std::endl;
        std::cout << "Descuento aplicado: " << descuento << std::endl;
        std::cout << "Total a pagar: " << total << std::endl;
    }
    if (500 < monto && monto <= 1000){
        categoria = "Plata";
        float descuento = (monto*plata)/100;
        float total = monto - descuento;
        std::cout << "---RESUMEN DE VENTA---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Subtotal: " << monto << std::endl;
        std::cout << "Descuento aplicado: " << descuento << std::endl;
        std::cout << "Total a pagar: " << total << std::endl;
    }
    if (monto > 1000){
        categoria = "Oro";
        float descuento = (monto*oro)/100;
        float total = monto - descuento;
        std::cout << "---RESUMEN DE VENTA---" << std::endl;
        std::cout << "Nombre del cliente: " << nombre << std::endl;
        std::cout << "Categoria: " << categoria << std::endl;
        std::cout << "Subtotal: " << monto << std::endl;
        std::cout << "Descuento aplicado: " << descuento << std::endl;
        std::cout << "Total a pagar: " << total << std::endl;
    }
return 0;
}