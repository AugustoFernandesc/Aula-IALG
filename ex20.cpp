#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string categoria;
    int dias;
    float kmRodados;

    // Valores fixos para diárias e custo por km para cada categoria
    const float valorDiaria[] = {88.00, 197.00, 265.00, 335.00};
    const float valorKm[] = {1.15, 1.56, 2.89, 3.40};

    // Listas de carros por categoria
    const string carros[] = {
        "Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0",
        "HB20 1.6, VW Gol 1.6, Renault Sandero 1.0, Fiat Cronos 1.3, Onix 1.0 Turbo, Nissan Versa FAST",
        "Ford Ecoesport 1.5, Renault Duster 1.6, Nissan Kicks 1.6, VW Nivus 1.6, Fiat Pulse 1.6, Chery Tiggo 3X Turbo",
        "Jeep Compass 4x4 Diesel, Mitsubishi Pajero 2.4 Diesel, Mercedes C180, Toyota Corola Cross, VW Taos Highline, Mitsubishi Eclipse Cross"
    };

    // Entrada dos dados
    cin >> categoria;
    cin >> dias;
    cin >> kmRodados;

    int index = -1;
    // Mapeamento de categoria para o índice correspondente
    if (categoria == "ECONOMICO") {
        index = 0;
    } else if (categoria == "INTERMEDIARIO") {
        index = 1;
    } else if (categoria == "PRIME") {
        index = 2;
    } else if (categoria == "ESPECIAIS") {
        index = 3;
    } else {
        cout << "Categoria inválida!" << endl;
        return 1;
    }

    // Cálculo do custo total
    float custo = (valorDiaria[index] * dias) + (valorKm[index] * kmRodados);

    // Saída formatada com precisão de duas casas decimais e símbolo "R$"
    cout << fixed << setprecision(2);
    cout << "R$ " << custo << endl;

    // Exibir a lista de carros disponíveis para a categoria escolhida
    cout << "Carros a disposição: " << carros[index] << endl;

    return 0;
}
