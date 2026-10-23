#include <iostream>
#include <cmath>
double a, b, c;
double x1, x2;
void leerCoeficientes(double &a, double &b, double &c)
{
    std::cout << "Ingrese un valor para 'a': ";
    std::cin >> a;
    std::cout << "Ingrese un valor para 'b': ";
    std::cin >> b;
    std::cout << "Ingrese un valor para 'c': ";
    std::cin >> c;
}
double calcularDeterminante(double a, double b, double c)
{
    double determinante = ((std::pow(b, 2)) - 4 * a * c);
    return determinante;
}
void calcularRaices(double determinante, double a, double b, double c, double &x1, double &x2)
{
    x1 = ((((-1) * b) + std::sqrt(determinante)) / (2 * a));
    x2 = ((((-1) * b) - std::sqrt(determinante)) / (2 * a));
}
void mostrarResultados(double a, double b, double c, double determinante, double x1, double x2)
{
    if (determinante > 0)
    {
        std::cout << "De los valores: a = " << a << ", b = " << b << ", c = " << c << "; se calulan dos soluciones, las cuales son: ";
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    else if (determinante == 0)
    {
        double x = x1;
        std::cout << "De los valores: a = " << a << ", b = " << b << ", c = " << c << "; se calula que: ";
        std::cout << "x = " << x << std::endl;
    }
    else
    {
        std::cout << "De los valores: a = " << a << ", b = " << b << ", c = " << c << "; se calula que la ecuacion cuadratica tiene dos soluciones complejas.";
    }
}
int main()
{
    leerCoeficientes(a, b, c);
    if (a == 0)
    {
        std::cout << "ERROR: La ecuacion no es cuadratica. Cambia los valores de los coeficientes." << std::endl;
        return 0;
    }
    else
    {
        double determinante = calcularDeterminante(a, b, c);
        if (determinante >= 0)
        {
            calcularRaices(determinante, a, b, c, x1, x2);
        }
        mostrarResultados(a, b, c, determinante, x1, x2);
        return 0;
    }
}