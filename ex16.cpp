#include <iostream>
#include <cmath>
#include <iomanip> // Para std::fixed e std::setprecision

using namespace std;

int main() {
    int h;
    double X, Y, resultado;

    cin >> h >> Y >> X; // Entrada: h, Y, X

    h = h % 360; // Reduz h para o intervalo [0, 359]

    if (h > 0 && h < 90) { 
        resultado = X + Y; // Soma
    } else if (h >= 90 && h < 180) { 
        resultado = X * Y; // Multiplicação
    } else if (h >= 180 && h < 270) {
        if (Y != 0) {
            resultado = X / Y; // Divisão
        } else {
            cout << "Erro: Divisão por zero!" << endl;
            return 1; 
        }
    } else {
        resultado = pow(X, Y); // Potência
    }

    // Arredondando para garantir que o resultado tenha um 0 no final
    resultado = floor(resultado * 10) / 10; // Arredondando para baixo e garantindo um 0 no final

    cout << fixed << setprecision(1) << resultado << endl; // Exibindo com uma casa decimal
    return 0;
}
