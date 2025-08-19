#include <iostream>
using namespace std;

int main() {
    int vetor[5];

    // Entrada de dados
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }

    // Exibindo vetor original
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << "  ";
    }
    cout << endl;

    int ordenado = 0;
    int vetorOrd[5];

    // Inserção ordenada
    for (int i = 0; i < 5; i++) {
        int pos = 0;

        // Encontrar a posição correta
        while (pos < ordenado && vetorOrd[pos] < vetor[i]) {
            pos++;
        }

        // Desloca os elementos para abrir espaço para o novo valor
        for (int j = ordenado; j > pos; j--) {
            vetorOrd[j] = vetorOrd[j - 1];
        }

        // Inserir o valor no vetor ordenado
        vetorOrd[pos] = vetor[i];
        ordenado++;

        // Exibir o vetor ordenado parcial
        for (int k = 0; k < ordenado; k++) {
            cout << vetorOrd[k] << " ";
        }
        cout << endl;
    }

    return 0;
}
