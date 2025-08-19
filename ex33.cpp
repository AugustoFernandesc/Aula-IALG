#include <iostream>
#include <fstream>

using namespace std;

void imprimir(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    ifstream arquivo("entrada.txt");
    
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }
    
    int tamanho, valor;
    arquivo >> tamanho;
    
    int* vetor = new int[tamanho];  // Usando alocação dinâmica para suporte universal
    
  //  int posicao = 0;
    int tamanho_atual = 0;
    
    while (arquivo >> valor) {
        int i;
        for (i = tamanho_atual; i > 0 and vetor[i - 1] > valor; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[i] = valor;
        tamanho_atual++;
        imprimir(vetor, tamanho_atual);
    }
    
    delete[] vetor;
    return 0;
}
