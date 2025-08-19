#include <iostream>  // Biblioteca para entrada e saída de dados (cin, cout)
#include <fstream>   // Biblioteca para manipulação de arquivos

using namespace std;

int main() {
    // Cria um objeto de entrada de arquivo para ler os dados do arquivo "valores.txt"
    ifstream arquivo("valores.txt");

    float numero, vetor[15];  // Declara um vetor de 15 elementos e uma variável temporária 'numero'

    // Lê 15 valores do arquivo e armazena cada um no vetor
    for (int i = 0; i < 15; i++) {
        arquivo >> numero;  // Lê um valor do arquivo
        vetor[i] = numero;  // Armazena o valor lido no vetor
    }

    int m;  // Declara uma variável para armazenar a quantidade de índices a serem modificados
    cin >> m;  // Recebe o valor de 'm' do usuário

    int indices[m];  // Declara um vetor de tamanho 'm' para armazenar os índices fornecidos pelo usuário
    // Lê os 'm' índices fornecidos pelo usuário
    for (int i = 0; i < m; i++) {
        cin >> indices[i];  // Recebe cada índice e armazena no vetor 'indices'
    }

    double multiplicador;  // Declara uma variável para o multiplicador
    cin >> multiplicador;  // Recebe o valor do multiplicador do usuário

    // Multiplica os elementos do vetor 'vetor' nos índices especificados pelo usuário pelo multiplicador
    for (int i = 0; i < m; i++) {
        vetor[indices[i]] *= multiplicador;  // Multiplica o valor do vetor no índice correspondente
    }

    // Exibe todos os elementos do vetor
    for (int i = 0; i < 15; i++) {
        cout << vetor[i] << " ";  // Imprime cada elemento do vetor seguido por um espaço
    }
    cout << endl;  // Quebra de linha ao final da exibição

    return 0;  // Indica que o programa terminou com sucesso
}
