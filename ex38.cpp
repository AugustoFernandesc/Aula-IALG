#include <iostream>
using namespace std;

int main() {
    int qtdseq;
    char matriz[6][6];

  
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> matriz[i][j];
        }
    }

    cin >> qtdseq;

    for (int i = 0; i < qtdseq; i++) {
        char letra1, letra2, letra3;
        cin >> letra1 >> letra2 >> letra3;

       //linha da esquerda para direita
        for (int linha = 0; linha < 6; linha++) {
            for (int k = 0; k < 4; k++) {
                if (matriz[linha][k] == letra1 and matriz[linha][k + 1] == letra2 and  matriz[linha][k + 2] == letra3)
                   {
                    cout << linha << " " << k << endl;
                }
            }
        }

        // linha da direita para esquerda
        for (int linha = 0; linha < 6; linha++) {
            for (int k = 5; k >= 2; k--) {
                if (matriz[linha][k] == letra1 and matriz[linha][k - 1] == letra2 and matriz[linha][k - 2] == letra3) {
                    cout <<  linha << " " << k << endl;
                }
            }
        }

        // Coluna de cima para baixo 
        for (int coluna = 0; coluna < 6; coluna++) {
            for (int k = 0; k < 4; k++) {
                if (matriz[k][coluna] == letra1 and matriz[k + 1][coluna] == letra2 and matriz[k + 2][coluna] == letra3) {
                    cout << k << " " << coluna << endl;
                }
            }
        }

        // Coluna de baixo para cima 
        for (int coluna = 0; coluna < 6; coluna++) {
            for (int k = 5; k >= 2; k--) {
                if (matriz[k][coluna] == letra1 and matriz[k - 1][coluna] == letra2 and matriz[k - 2][coluna] == letra3) {
                    cout << k << " " << coluna << endl;
                }
            }
        }
    }





    return 0;
}
