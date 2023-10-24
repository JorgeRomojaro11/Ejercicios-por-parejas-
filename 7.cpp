#include <iostream>

int main() {
    int numero = 11;
    int& referencia = numero;

    std::cout << "Valor de 'numero': " << numero << std::endl;
    std::cout << "Valor de 'referencia': " << referencia << std::endl;

    referencia = 24;

    std::cout << "Valor de 'numero' después de modificar la referencia: " << numero << std::endl;
    std::cout << "Valor de 'referencia' después de modificar la referencia: " << referencia << std::endl;

    return 0;
}
