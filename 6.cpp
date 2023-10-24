#include <iostream>

// Función para inicializar un array con valores consecutivos
void inicializarArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
}

// Función para imprimir un array
void imprimirArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 5;

    int* punteroArray;

    punteroArray = new int[size];

    inicializarArray(punteroArray, size);

    std::cout << "Array original: ";
    imprimirArray(punteroArray, size);

    for (int i = 0; i < size; i++) {
        punteroArray[i] *= 2;
    }

    std::cout << "Array modificado: ";
    imprimirArray(punteroArray, size);

    int** punteroAPuntero = &punteroArray;

    std::cout << "Acceso al array a través del puntero a puntero: ";
    for (int i = 0; i < size; i++) {
        std::cout << (*punteroAPuntero)[i] << " ";
    }
    std::cout << std::endl;

    delete[] punteroArray;

    return 0;
}





