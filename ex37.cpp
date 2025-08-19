#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

ofstream arquivo("holerite.txt");


float salbas, gratif, imposto, salfinal, soma;

cin >> salbas;
cin >> gratif;
cin >> imposto;

soma = salbas + gratif;

imposto *= soma/100;

salfinal = soma-imposto;

arquivo << soma << endl << imposto << endl << salfinal;

cout << fixed << setprecision(2) << soma << endl << imposto << endl << salfinal;


arquivo.close();

return 0;
}
