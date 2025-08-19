#include <iostream>
#include <string>

using namespace std;

struct Time {
    int num_do_time;
    string nome_do_time;
    int gols_marcados;
};

void ler_valores(Time times[], int n){
    for (int i = 0; i < n; i++) {
        cin >> times[i].num_do_time >> times[i].nome_do_time >> times[i].gols_marcados;
    }
}

void selection_sort(Time times[], int n){
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++){
            if (times[j].num_do_time < times[menor].num_do_time){
                menor = j;
            }
        }
        Time aux = times[i];
        times[i] = times[menor];
        times[menor] = aux;
    }
}

int busca_sequencial(Time times[], int n, int valor_procurado){
    for (int i = 0; i < n; i++) {
        if (times[i].num_do_time == valor_procurado){
            return i; 
        }
    }
    return -1; 
}

int main(){
    int n; 
    cin >> n;

    Time times[n]; 

    ler_valores(times, n);

    selection_sort(times, n);

    int valor_procurado;
    cin >> valor_procurado;

    int posicao = busca_sequencial(times, n, valor_procurado);

    if (posicao == -1) {
        cout << "-1" << endl;
}   else{
        cout << posicao << endl;
        cout << times[posicao].nome_do_time << " " << times[posicao].gols_marcados << endl;

}

    
    
    return 0;


}
