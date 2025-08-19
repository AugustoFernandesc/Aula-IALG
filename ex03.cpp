#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
int main () {
	
	int numero, centena, dezena, unidade, soma, produto;
	ofstream arquivo ("saida.txt");
	cout << "Digite um numero inteiro de 3 digitos: ";
	cin >> numero;
	
	centena =numero/100;
	dezena =(numero/10)%10;
	unidade =numero%10;
	
	soma = centena + dezena + unidade;
	produto = centena * dezena * unidade;
	
	cout << "A soma entre 3 digitos vale: " << soma << endl;
	cout << "O produto dos 3 digitos vale: " << produto;
	
	arquivo << "numero " << numero << endl;
	arquivo << "A soma entre os 3 digitos vale: "<< soma << endl;
	arquivo << "O produto dos 3 digitos vale: " << produto;
	arquivo.close();
	
	return 0;
	
}
