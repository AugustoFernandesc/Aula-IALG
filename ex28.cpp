#include <iostream>
#include <climits>

using namespace std;

int main() {
    int vetor[5];
    
    // Entrada dos valores do vetor
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }

    // Exibindo o vetor original
    cout << "Vetor original: ";
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Ordenação por seleção
    for (int i = 0; i < 5; i++) {
        int menor = vetor[i];
        int pos_menor = i;
        
        for (int j = i + 1; j < 5; j++) {
            if (vetor[j] < menor) {
                menor = vetor[j];
                pos_menor = j;
            }
        }

        // Trocando o elemento atual com o menor encontrado
        if (pos_menor != i) {
            int temp = vetor[i];
            vetor[i] = vetor[pos_menor];
            vetor[pos_menor] = temp;
        }
    }

    // Exibindo o vetor ordenado
    cout << "Vetor ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
