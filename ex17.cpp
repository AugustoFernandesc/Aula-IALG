#include <iostream>
#include <iomanip> // Para std::setprecision

using namespace std;

int main() {
    double trabalho, avaliacao, exame, media;
    
    // Leitura das notas
    cin >> trabalho; // Nota do trabalho de laboratório
    cin >> avaliacao; // Nota da avaliação semestral
    cin >> exame; // Nota do exame final
    
    // Cálculo da média ponderada
    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / (2 + 3 + 5);
    
    // Ajuste da média para simular a saída desejada
    media = (media * 100) / 100; // Arredondando para duas casas decimais
    
    // Exibição da média com duas casas decimais
    cout << fixed << setprecision(2) << media << endl;

    // Determinação do conceito
    char conceito;
    if (media >= 8.0 && media <= 10.0) {
        conceito = 'A';
    } else if (media >= 7.0 && media < 8.0) {
        conceito = 'B';
    } else if (media >= 6.0 && media < 7.0) {
        conceito = 'C';
    } else if (media >= 5.0 && media < 6.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibição do conceito
    cout << conceito << endl;

    return 0;
}
