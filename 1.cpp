#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "Por favor ingresa tu nombre: ";
    cin >> nombre;

    cout << "por favor ingresa tu edad: ";
    cin >> edad;

    cout << "Hola, " << nombre << "!tienes " << edad << "años.\n";

    return 0;
}

