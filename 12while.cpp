#include <iostream>
using namespace std;

int main () {

    int n = 0;

    while(true) {
        if(n == 42) {
            cout << "CONDIÇÂO DE PARADA N == 42\n";
            cout << "O valor de n é: " << n << "\n";
            break;
        }
        cout << "O valor de n é: " << n << "\n";
        n++;
    }

    return 0;
}