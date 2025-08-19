#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main () {
 float valor, quadrado, cubo, raiz = 0;
 cin >> valor;
 
 quadrado = pow (valor, 2);
 cubo = pow (valor, 3);
 raiz = sqrt (valor);
 
 cout << quadrado << endl;
 cout << cubo << endl;
 cout << raiz << endl;
  
    
    
return 0;
}
