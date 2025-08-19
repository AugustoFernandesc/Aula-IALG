#include <iostream>

using namespace std;

int BuscaBinaria (int v[], int pos_inicial, int pos_final, int K) {
	int meio = (pos_inicial + pos_final)/2;
	
	if (K == V[meio]) { //caso base: elemento encontrado
	
	return meio;	
	
	}
else if (pos_inicial < pos_final) { //caso geral: processo de busca 
	
if (V[meio] < K) return buscaBinaria(V, meio+1, pos_final, K);
else return BuscaBinaria (V, pos_inicial, meio-1, K);
}else {  //caso base: elemento não encontra
	
	return -1;
	
	
}
}





int main() {


int v;
cin >> v;


BuscaBinaria();








return 0;
}
