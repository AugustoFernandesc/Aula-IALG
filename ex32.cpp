#include <iostream>

using namespace std;

int* preencherVetor(int n) {
    int* vet = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    return vet;
}

void imprimirVetor(int* vet, int tam) {
    cout << "[ ";
    for (int i = 0; i < tam; ++i) {
        cout << vet[i] << " ";
    }
    cout << "]" << endl;
}

int buscaMaior(int* vet, int tam) {
    int maior = vet[0];
    for (int i = 1; i < tam; ++i) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int buscaMenor(int* vet, int tam) {
    int menor = vet[0];
    for (int i = 1; i < tam; ++i) {
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }
    return menor;
}

int main() {
    int n;
    cin >> n;

    int* vet = preencherVetor(n);
    imprimirVetor(vet, n);

    cout << "Maior elemento: " << buscaMaior(vet, n) << endl;
    cout << "Menor elemento: " << buscaMenor(vet, n) << endl;

    delete[] vet;

    return 0;
}
