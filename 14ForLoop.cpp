#include <iostream>
using namespace std;

int main() {

    int x, y;
    //for (inicialização de variaveis; condição de parada; incremento e decremento)
    for(x=0, y=2; x<10; x++, y+=2){
        cout << "O valor de X é:" << x << endl;
        cout << "O valor de Y é:" << y << endl;
    }

    return 0;
}