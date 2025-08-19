#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo, palavra;
    
    // Ler o nome do arquivo de texto
    cin >> nomeArquivo;
    
    // Ler a palavra (sem espaços) que será escrita no arquivo
    cin >> palavra;
    
    // Abrir o arquivo em modo de escrita, criando ou substituindo seu conteúdo
    ofstream arquivo(nomeArquivo);
    
    // Verificar se o arquivo foi aberto corretamente
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }
    
    // Escrever a palavra no arquivo
    arquivo << palavra;
    
    // Fechar o arquivo
    arquivo.close();
    
    return 0;
}
