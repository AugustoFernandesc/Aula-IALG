#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
int main () {
	
	//D = sqrt (x2-x1)² + (y2-y1)²
	//Coordenadas:
	
	//exemplo de entrada
	//x1 = -2.1, x2 = 3.3, y1 = 4.6, y2 = 1.6
	//saida: D= 8.22192
	
	float x1, x2, y1, y2, dx, dy, D = 0.0;
	
	//Coordenadas X
	cout << "Digite a coordenada do primeiro x: "; 
	cin >> x1;
	cout << "Digite a coordenada do segundo x: "; 
	cin >> x2;
	
	//Coordenadas Y
	cout << "Digite a coordenada do primeiro y: "; 
	cin >> y1;
	cout << "Digite a coordenada do segundo y: "; 
	cin >> y2;
	
	//Distancia entre as coordenadas
	dx = pow((x2-x1),2);
	dy = pow((y2-y1),2);

    //Distancia entre os pontos
    D = sqrt(dx+dy);
    
    cout << "O valor da distanica é: " << D;
    
    return 0;
}
