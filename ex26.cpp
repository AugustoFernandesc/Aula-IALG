#include <iostream>

using namespace std;

int main() {
    int vetor[20], numero;

    // Entrada dos valores do vetor
    for (int i = 0; i < 20; i++) {
        cin >> vetor[i];
    }

    // Exibindo o vetor original
    cout << "Vetor: ";
    for (int i = 0; i < 20; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Encontrando o maior número
    int maior = vetor[0];
    for (int i = 1; i < 20; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Encontrando o menor número
    int menor = vetor[0];
    for (int i = 1; i < 20; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "O maior numero do vetor e: " << maior << endl;
    cout << "O menor numero do vetor e: " << menor << endl;

    // Verificação se um número está no vetor
    cout << "Digite um numero: ";
    cin >> numero;

    bool esta = false;
    for (int i = 0; i < 20; i++) {
        if (numero == vetor[i]) {
            esta = true;
            break;  // Pode sair do loop se o número foi encontrado
        }
    }

    if (esta)
        cout << "O numero " << numero << " faz parte do vetor" << endl;
    else
        cout << "O numero " << numero << " nao faz parte do vetor" << endl;

    return 0;
}
