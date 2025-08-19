#include <iostream>

using namespace std;

// Lucas Marcelino Neves, matricula: 202420217
// Augusto Fernandes Carvalho, matricula: 202420548

void insertion_sort(int vetor[], int tam) {
    int valor_pivo, j;
    for (int i = tam - 2; i >= 0; i--) {
        valor_pivo = vetor[i];
        j = i + 1;
        while (j < tam and vetor[j] > valor_pivo) {
            vetor[j - 1] = vetor[j];
            j++;
        }
        vetor[j - 1] = valor_pivo;
        
        for (int k = 0; k < tam; k++) {
            cout << vetor[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int tam;
    cin >> tam;
    
    int vetor[tam];
    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }
    
    insertion_sort(vetor, tam);

    return 0;
}
