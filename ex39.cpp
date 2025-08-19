#include <iostream>
#include <cmath> 

using namespace std;

struct Pessoa {
    double salario;
    int idade;
    int filhos;
};

int main() {
    int entrevistados; 
    cin >> entrevistados;

    Pessoa pessoas[entrevistados]; 

    double somaSalarios = 0.0;
    int somaFilhos = 0;
    double maiorSalario = 0.0;
    int pessoasComSalarioMaior1000 = 0;

    
    for (int i = 0; i < entrevistados; i++) {
        cin >> pessoas[i].salario >> pessoas[i].idade >> pessoas[i].filhos;

        somaSalarios += pessoas[i].salario;
        somaFilhos += pessoas[i].filhos;

        if (pessoas[i].salario > maiorSalario) {
            maiorSalario = pessoas[i].salario;
        }
        if (pessoas[i].salario > 1000.0) {
            pessoasComSalarioMaior1000++;
        }
    }

    
    double mediaSalarios = (somaSalarios) / entrevistados;
    double mediaFilhos = double (somaFilhos) / entrevistados;
    int percentualSalarioMaior1000 = round((pessoasComSalarioMaior1000 * 100.0) / entrevistados);

   
    cout << mediaSalarios << endl;
    cout << mediaFilhos << endl;
    cout << maiorSalario << endl;
    cout << percentualSalarioMaior1000 << "%" << endl;

    return 0;
}
