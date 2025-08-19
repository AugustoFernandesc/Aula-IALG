#include <iostream>

using namespace std;

int main() {
    char letra1, letra2;

    // Leitura das duas letras
    cin >> letra1;
    cin >> letra2;

    // Comparando as representações numéricas
    if (letra1 > letra2) {
        cout << letra1 << endl; // Imprime a letra1 se for maior
    } else {
        cout << letra2 << endl; // Imprime a letra2 se for maior ou igual
    }

    return 0;
}
