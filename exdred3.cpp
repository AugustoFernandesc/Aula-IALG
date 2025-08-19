#include <iostream>

using namespace std;

// Lucas Marcelino Neves, matricula: 202420217
// Augusto Fernandes Carvalho, matricula: 202420548

void inserir_ordenado(int vetor[], int *tam_atual, int valor, int capacidade) {
    if (tam_atual >= capacidade) {
        return; 
    }
    
    int i = tam_atual - 1;
    while (i >= 0 and vetor[i] > valor) {
        vetor[i + 1] = vetor[i];
        i--;
    }
    vetor[i + 1] = valor;
    tam_atual++;
}

int main() {
    const int capacidade = 20;
    int vetor[capacidade] = {1, 3, 6, 7, 8, 22, 25, 41};
    int tam_atual = 8;
    
    
    int valor;
    while (cin >> valor and valor != -1) {
        if (tam_atual >= capacidade) {
            break; 
        }
        inserir_ordenado(vetor, tam_atual, valor, capacidade);
    }

    for (int i = 0; i < tam_atual; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
