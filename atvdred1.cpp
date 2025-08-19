#include <iostream>

using namespace std;

void piramide(int num) {
    for (int i = 1; i <= num; i++) {
        // Imprime números de 1 até i na linha
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl; // Quebra de linha
    }
}

int main() {
    int num;
    cin >> num; // Usuário insere um número

    piramide(num); // Chama a função piramide

    return 0;
}
