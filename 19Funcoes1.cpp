#include <iostream>
#include <string>
using namespace std;

// Prototipando a função
void texto();
double soma(double n1, double n2);
void retornaNome(string tra[4]);

int main() {
    texto();

    string nome[4] = {"Osaki", "Walter", "Maria", "Donald"};
    retornaNome(nome);

    double totalSoma = soma(4.0, 5.0);

    cout << totalSoma;

    return 0;
}

void texto() {
    cout << "Teste de função!\n";
}


double soma(double n1, double n2) {
    return n1 + n2;
}


void retornaNome(string tra[4]) {
    for(int i = 0; i<4; i++) {
        cout << tra[i] << "\n";
    }
}