#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo;
    cin >> nomeArquivo;  // Ler o nome do arquivo da entrada padrão (ex: "meu-arquivo.txt")
    ifstream arquivo(nomeArquivo);  // Abrir o arquivo para leitura
    
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
}

    string conteudo;
    getline(arquivo, conteudo);  // Ler o conteúdo do arquivo (pode conter caracteres especiais como '!' ou outros)
    cout << conteudo << endl;  // Imprimir o conteúdo do arquivo na saída padrão
    arquivo.close();  // Fechar o arquivo
    return 0;
}
