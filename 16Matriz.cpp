#include <iostream>
using namespace std;

int main() {

    int matriz[3][4];
    int l, c;

    //Populando a matriz
    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
           cin >> matriz[l][c];
        }
    }

    //Imprimindo os valores da matriz
    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
            cout << matriz[l][c];
        }
        cout << endl;
    }

    return 0;
}