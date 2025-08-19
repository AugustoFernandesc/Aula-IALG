#include <iostream>
using namespace std;

// Lucas Marcelino Neves, matricula: 202420217
// Augusto Fernandes Carvalho, matricula: 202420548

void selection_sort(int vetor[], int tam) {
    int maior, aux_troca;
    for (int indice = 0; indice < tam - 1; indice++) {
        maior = indice;
        for (int j = indice + 1; j < tam; j++) {
            if (vetor[j] > vetor[maior]) {
                maior = j;
            }
        }
        aux_troca = vetor[indice];
        vetor[indice] = vetor[maior];
        vetor[maior] = aux_troca;
        for (int k = 0; k < tam; ++k) {
            cout << vetor[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    int* vec = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    selection_sort(vec, n);

    delete[] vec;
    return 0;
}
