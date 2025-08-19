#include <iostream>

using namespace std;
int main(){

int tam;

cin >> tam;

int *vetA = new int[tam];
int *vetB = new int[tam];



for (int i = 0; i < tam; ++i){
   cin >> vetA[i];
}

for (int i = 0; i < tam; ++i){
   cin >> vetB[i];
}

int soma = 0;

for (int i = 0; i < tam; ++i){
    soma += vetA[i]*vetB[i];
}

cout << soma;
return 0;
}
