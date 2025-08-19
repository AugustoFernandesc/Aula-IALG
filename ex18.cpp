#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision

using namespace std;

int main() {
    float n1, n2, n3, n4;

    // Leitura dos quatro números
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    // Inicializando um array com os números
    float nums[4] = {n1, n2, n3, n4};

    // Ordenando os números usando uma abordagem simples (bubble sort)
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    // Calculando a soma dos três menores números
    float soma = nums[0] + nums[1] + nums[2];

    // Exibindo a soma com duas casas decimais
    cout << fixed << setprecision(2) << soma << endl;

    return 0;
}
