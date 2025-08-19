#include <iostream>

using namespace std;
int main(){
	
	int *x, *y, *resultado;

x = new int;
y  = new int;
resultado = new int;

cin >> *x;
cin >> *y;

*resultado  = (*x) * (*y);

cout << *resultado << endl;
cout << x << endl;
cout << y << endl;
cout << resultado << endl;

return 0;
}
