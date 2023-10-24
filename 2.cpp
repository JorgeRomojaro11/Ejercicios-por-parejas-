#include <iostream>
using namespace std;
int main() {
    int edad;

    cout << "Por favor ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad.\n";
    } else {
        cout << "Eres menor de edad.\n";
    }
    return 0;
}

