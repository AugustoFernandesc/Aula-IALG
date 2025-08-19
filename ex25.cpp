#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void simplificar (int &numerador, int &denominador);

int main (){

int numerador;
int denominador;

cin >> numerador >> denominador;

simplificar (numerador, denominador);

cout << numerador << endl << denominador;

return 0;
}

void simplificar (int &numerador, int &denominador){
	
	bool n_negativo = false;
	bool d_negativo = false;
	
	if (numerador < 0){
		n_negativo = true;
		numerador *=-1;
}
	if (denominador < 0){
		d_negativo = true;
		denominador *=-1;
}
	
	int a = numerador;
	int b = denominador;
	
	while (b !=0){
	int resto = a%b;
	a = b;
	b = resto;
}

     int mdc = a;
	
	 if (n_negativo == true){
	    numerador *=-1;
}
	 if (d_negativo == true){
	    denominador *=-1;
	}
	
	numerador /= mdc;
	denominador /= mdc;
}
