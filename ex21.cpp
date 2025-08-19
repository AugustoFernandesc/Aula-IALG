#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

// Função para calcular a distância entre dois pontos no plano cartesiano
float calcularDistancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Função para calcular o tempo total de acordo com o meio de transporte e condição do trânsito
float calcularTempoTotal(float distancias[], string transito[], bool isBicicleta) {
    float tempoTotal = 0;
    for (int i = 0; i < 3; i++) {
      if (isBicicleta) {
      if (transito[i] == "cheio") {
         tempoTotal += distancias[i] * 18;
       } else {
         tempoTotal += distancias[i] * 15;
}
 } else {
         if (transito[i] == "cheio") {
         tempoTotal += distancias[i] * 24;
 } else {
         tempoTotal += distancias[i] * 5;
 }
 }
 }
    return tempoTotal;
}

int main() {
    // Variáveis para armazenar as coordenadas e a condição de trânsito
    float x1, y1, x2, y2, x3, y3;
    string transito[3];

    // Entrada das coordenadas e condições de trânsito
    cin >> x1 >> y1 >> transito[0];  // Local 1 e trânsito Casa -> Local 1
    cin >> x2 >> y2 >> transito[1];  // Local 2 e trânsito Local 1 -> Local 2
    cin >> x3 >> y3 >> transito[2];  // Local 3 e trânsito Local 2 -> Local 3

    // Calcular as distâncias entre os pontos
    float distancias[3];
    distancias[0] = calcularDistancia(0, 0, x1, y1);  // Casa -> Local 1
    distancias[1] = calcularDistancia(x1, y1, x2, y2);  // Local 1 -> Local 2
    distancias[2] = calcularDistancia(x2, y2, x3, y3);  // Local 2 -> Local 3

    // Calcular o tempo total para bicicleta e carro
    float tempoBicicleta = calcularTempoTotal(distancias, transito, true);
    float tempoCarro = calcularTempoTotal(distancias, transito, false);

    // Determinar o meio de transporte mais rápido e imprimir o resultado
    if (tempoBicicleta < tempoCarro) {
        cout << "Bicicleta " << ceil(tempoBicicleta) << endl;  // Arredondar para cima
    } else {
        cout << "Carro " << ceil(tempoCarro) << endl;  // Arredondar para cima
    }

    return 0;
}
