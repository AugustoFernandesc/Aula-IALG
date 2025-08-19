#include <iostream>
#include <cmath>
using namespace std;
int main (){

int n1, n2, resultado;
 char simbolo;
 cin >> n1 >> n2 >> simbolo;
 if (simbolo == '+') {
  resultado = n1+n2;
} else if (simbolo == '-') {
  resultado = n1-n2;	
}  else if (simbolo == '*') {
	 resultado = n1*n2;
} else 	
     resultado = n1/n2;
	 
	  cout << resultado;
 
 
 return 0;
 }
