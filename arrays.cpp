#include <iostream>
using namespace std;

int main() {
    int enumeracion[10];

    for(int a =0; a < 10; a++ ) {
        enumeracion[a] = a + 1;
        std::cout << enumeracion[a] << endl;
    }
    return 0;
}