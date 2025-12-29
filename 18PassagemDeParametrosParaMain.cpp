#include <iostream>
using namespace std;

// Supondo que o programa seja executado da seguinte forma: programa.exe caique mendes
int main(int argc, char *argv[]) {

    cout <<  argv[0] << endl; // Imprime o primeiro parâmetro (programa.exe)
    cout <<  argv[1] << endl; // Imprime o segundo parâmetro (caique)
    cout <<  argv[2] << endl; // Imprime o terceiro parâmetro (mendes)

    cout <<  argc << endl; //Imprimirá o valor 3 

    return 0;
}
