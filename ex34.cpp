#include <iostream>
#include <cmath>

using namespace std;

int* processaVetor(int* vetor, int n, int& tamanhoResultado){
    
int* resultado = new int[n];
tamanhoResultado = 0; 

for (int i = 0; i < n; ) {

int valorAtual = vetor[i];

int contador = 1;

while (i + contador < n && vetor[i + contador] == valorAtual) {
contador++;
}

if (contador > 1) {

if (contador % 2 == 0) {
resultado[tamanhoResultado++] = valorAtual * contador;

}else {

int resultadoPotencia = valorAtual;

for (int j = 1; j < contador; ++j) {
resultadoPotencia *= valorAtual;
}
resultado[tamanhoResultado++] = resultadoPotencia;
}

}else{
resultado[tamanhoResultado++] = valorAtual;
}

i += contador;
}

return resultado;
}

int main(){ 

int n;
cin >> n;

int *vetor = new int[n];

for (int i=0; i<n; i++){
cin >> vetor[i];
}
int tamanhoResultado;

int* resultado = processaVetor(vetor, n, tamanhoResultado);

for (int i = 0; i < tamanhoResultado; ++i) {
cout << resultado[i] << " ";
}

cout << endl;

delete[] vetor;

delete[] resultado;

return 0;
}
