#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dividendo, divisor;
  cin >> dividendo;
  cin >> divisor;

if (divisor == 0) {
        cout << "erro" << endl;
} else {
        int quociente = dividendo/divisor;
int resto = dividendo % divisor;
        cout << quociente << endl;
      cout << resto << endl;
}

 return 0;
}

