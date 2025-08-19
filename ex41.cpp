#include <iostream>
using namespace std;

int main() {
    int tam = 10, redimensionamentos = 0;

    int *vetor = new int[tam];

    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }

    int pos = 0;
    while (pos < tam) {
        if (vetor[pos] % 5 == 0 and vetor[pos] !=0) { 
             

            int novoTam = tam - 1; 
            int *novoVetor = new int[novoTam]; 

            for (int i = 0, j = 0; i < tam; i++) {
                if (i != pos) { 
                    novoVetor[j++] = vetor[i];
                }
            }
			redimensionamentos++;
            delete[] vetor;
            vetor = novoVetor;
            tam = novoTam; 
           
        } else {
            pos++; 
        }
    }

    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << redimensionamentos << endl;

    delete[] vetor;

    return 0;
}
