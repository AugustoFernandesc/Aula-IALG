#include <iostream>
#include <fstream>
#include <cmath>  // Para usar a função sqrt (raiz quadrada)

using namespace std;

int main() {
    ifstream arquivo("entrada.txt");  // Abrir o arquivo entrada.txt
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    // Variáveis para armazenar as coordenadas dos dois pontos
    double x1, y1, x2, y2;

    // Ler as coordenadas do arquivo
    arquivo >> x1 >> y1 >> x2 >> y2;

    // Calcular a distância entre os pontos A(x1, y1) e B(x2, y2)
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibir a distância na saída padrão com 5 casas decimais
    cout.precision(5);
    cout << fixed << distancia << endl;

    // Fechar o arquivo
    arquivo.close();

    return 0;
}
