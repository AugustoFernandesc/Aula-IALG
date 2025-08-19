#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream arquivo("entrada.txt");

    int numero, tamanho = 0;
    int *vetor = new int[5];

    while (arquivo >> numero) {
        if (tamanho > 5) { 
        
            int *temp = new int[tamanho+1];
            memcpy(temp, vetor, sizeof(int)*tamanho);
            for (int i = 0; i < tamanho; i++) {
                temp[i] = vetor[i];
            }
            delete[] vetor;
            vetor = temp;
        }
        vetor[tamanho] = numero;
        tamanho++;
    }

    
  
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;


    int maior = vetor[0];
    int segundoMaior = vetor[0];
    int menor = vetor[0];
    int segundoMenor = vetor[0];

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > maior) {
            segundoMaior = maior;
            maior = vetor[i];
        } else if (vetor[i] > segundoMaior and vetor[i] < maior) {
            segundoMaior = vetor[i];
        }

        if (vetor[i] < menor) {
            segundoMenor = menor;
            menor = vetor[i];
        } else if (vetor[i] < segundoMenor and vetor[i] > menor) {
            segundoMenor = vetor[i];
        }
    }


    cout << "Maior: " << maior << endl;
    cout << "Segundo Maior: " << segundoMaior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Segundo Menor: " << segundoMenor << endl;

    
    return 0;
}
