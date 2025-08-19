#include <iostream>
#include <string>

using namespace std;


float mparacm(float n) {
    return n * 100;
}


float cmparam(float n) {
    return n / 100;
}

int main() {
    float n;  
    string medida;

    cin >> n; 
    cin >> medida;  
    

    if (medida == "centimetro") {
        cout << mparacm(n) << " cm" << endl;
    } else if (medida == "metro") {
        cout << cmparam(n) << " m" << endl;
    } else {
        cout << "ERRO" << endl;
    }

    return 0;
}
