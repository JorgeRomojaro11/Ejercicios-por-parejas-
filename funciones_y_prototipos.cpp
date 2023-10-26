#include <iostream>

int suma(int a, int b) {
    return a + b;
}

void variableslocales() {
    int x = 10;
    std::cout << "Valor de x dentro de la funcion: " << x << std::endl;
}

int suma(double a, double b) {
    return a + b;
}

int suma(int a, int b, int c) {
    return a + b + c;
}

int multiplicar(int a, int b) {
    return a * b;
}

int cuadrado(int x) {
    return x * x;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}


void funcionExterna() {
    std::cout << "Esta es una función en un archivo de origen diferente." << std::endl;
}

int main() {
    int solucion1 = suma(5, 3);
    int solucion2 = suma(2.5, 3.7);
    int solucion3 = suma(4, 7, 2);
    int solucion4 = multiplicar(5, 3);
    int solucion5 = cuadrado(3);
    int solucion6 = factorial(5);

    std::cout << "Resultado 1: " << solucion1 << std::endl;
    std::cout << "Resultado 2: " << solucion2 << std::endl;
    std::cout << "Resultado 3: " << solucion3 << std::endl;
    std::cout << "Resultado 4: " << solucion4 << std::endl;
    std::cout << "Resultado 5: " << solucion5 << std::endl;
    std::cout << "Factorial de 5: " << solucion6 << std::endl;

    variableslocales();

    funcionExterna();

    return 0;
}