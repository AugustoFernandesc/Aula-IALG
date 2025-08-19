#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct politico{
    string nome;
    string partido;
    float valorDesviado;
};
void intercala(politico politicos[], int inicio, int meio, int fim){
    
    int i = inicio, j = meio + 1;
    int tamanho = fim - inicio + 1;
    politico* temp = new politico[tamanho]; 
    int k = 0;

    while (i <= meio and j <= fim){
        if (politicos[i].valorDesviado >=politicos[j].valorDesviado){
            temp[k++] = politicos[i++];
    }else{
         temp[k++] = politicos[j++];
   }
}
   while (i <= meio){
        temp[k++] =politicos[i++];
}

  while(j <= fim){
      temp[k++] = politicos[j++];
}
for (i = inicio, k = 0; i <= fim; i++, k++){
    politicos[i]= temp[k];
}

}

void mergesort(politico politicos[], int inicio, int fim){
    if (inicio < fim) {
        int meio = (inicio + fim)/2;
        mergesort(politicos, inicio, meio);    
        mergesort(politicos, meio +1, fim);  
        intercala(politicos, inicio, meio, fim); 
    }
}

int main(){
    
      ofstream arquivo("relacao_corruptos.txt");
    
    int qtdPoliticos;
    cin >> qtdPoliticos; 

    politico* politicos = new politico[qtdPoliticos]; 

    for (int i = 0; i < qtdPoliticos; i++){
        cin >> politicos[i].nome;
        cin >> politicos[i].partido;
        cin >> politicos[i].valorDesviado;
}

    mergesort(politicos, 0, qtdPoliticos - 1);

  
    
  for (int i = 0; i < qtdPoliticos; i++){
        arquivo << politicos[i].nome << endl;

}
   arquivo.close();


    return 0;
}
