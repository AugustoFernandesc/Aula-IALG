#include <iostream> 
using namespace std;

int main() { 
	
	int tamanho;
	cin >> tamanho;
    int* vetor = new int [tamanho] ;
    int* moda = new int [tamanho] ;
    
    
    
    for ( int j = 0; j < tamanho; j++) { 
        cin >> vetor[j];
        moda[j] = 1;
    }
    
    int maior = vetor[0];
    int menor = vetor[0];
    int soma = 0;
    
    for ( int j = 0; j < tamanho; j++) {
		if ( vetor[j] > maior){
			maior = vetor[j];
			}
		}
	for ( int j = 0; j < tamanho; j++) {
		if ( vetor[j] < menor){
			menor = vetor[j];
		}
	}
	
	for ( int j = 0; j < tamanho; j++) {
			soma += vetor[j];
			}
	float media = soma/ float (tamanho);
		
		cout << maior << endl;
		cout << menor << endl;
		cout << media << endl;
		
	for(int i = 0; i < tamanho; i++){
		for(int j = i+1; j < tamanho; j++){
				if ( vetor[i] == vetor[j]){
					moda[i]++;
					}
				}
			}

	int maiormoda = moda[0];

	for(int i = 1; i < tamanho; i++){
		if (moda[i] > maiormoda){
			maiormoda = moda[i];
			}
		}
		
	for(int i = 0; i < tamanho; i++){
		if (moda[i] == maiormoda){
			cout << vetor[i] << " ";
		}
	}
	 	
		
	delete [] moda;	
	delete [] vetor;
	return 0; 
}
