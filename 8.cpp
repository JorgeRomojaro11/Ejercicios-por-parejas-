#include <iostream>

const double PI = 3.14159265359;
const double GRAVEDAD = 9.81;

enum Color { ROJO, VERDE, AZUL };

typedef double Precio;
typedef int Cantidad;

void saludar(const char* nombre) {
    std::cout << "Hola, " << nombre << "!" << std::endl;
}

int main() {
    double radio = 5.0;
    double area = PI * radio * radio;
    std::cout << "Área de un círculo con radio " << radio << " es " << area << std::endl;

    Color miColor = AZUL;
    std::cout << "Mi color favorito es el número " << miColor << std::endl;

    Precio precioProducto = 11.88;
    Cantidad cantidadProducto = 10;
    std::cout << "El precio del producto es $" << precioProducto << " y tenemos " << cantidadProducto << " en stock." << std::endl;

    saludar("Jorge");

    return 0;
}