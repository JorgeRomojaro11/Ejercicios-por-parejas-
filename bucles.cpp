#include <iostream>
using namespace std;
int main() {
    //BUCLE FOR
    for (int i = 1; i <= 10; i++) {
        std::cout << i << endl;
    }

    //BUCLE WHILE
    int numero;
    int a = 1;

    std::cout << "Escriba un numero para repodrucir su tabla de multiplicar: ";
    std::cin >> numero;
    if (numero >= 0) {
        std::cout << "La tabla de multiplicar es: ";
    } else {
        std::cout << "El numero tine que ser positivo.";
        return 0;
    }

    while (a <= 10) {
        int solucion = numero * a;

        std::cout << numero << " x " << a << " = " << solucion << endl;
        a++;
    }
///////////BUCLE DO
    int x;

    std::cout << "Ingrese un numero para reproducir su tabla de multiplicar: ";
    std::cin >> x;

    int contador = 1;
    std::cout << "la tabla de multiplicar del " << x << " es: " << endl;

    do {
        std::cout << x << " x " << contador << " = " << x * contador << endl;
        contador++;
    } while (contador <= 10);


    //////BREAK
    int s;

    std::cout << "Introduce un numero : ";
    std::cin >> s;

    while (true) {
        if (s <= 0) {
            std::cout << "El numero no es positivo. Terminando bucle." << std::endl;
            break;
        }

        std::cout << "El numero ingresado es: " << numero << std::endl;

        std::cout << "Introduce un numero positivo (o un numero negativo para salir): ";
        std::cin >> s;

        if (s < 0) {
            std::cout << "Terminando programa." << std::endl;
            break;
        }
    }

    std::cout << "Programa terminado." << std::endl;

    return 0;
}






