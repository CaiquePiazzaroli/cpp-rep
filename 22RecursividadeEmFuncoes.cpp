#include <iostream>
using namespace std;

// O valor padrão fica APENAS aqui no protótipo
void contador(int num, int cont = 0);

int main() {
    contador(20);
    return 0;
}

// Na implementação declara o tipo e o nome
void contador(int num, int cont) {
    cout << cont << endl;

    //Recursividade!
    if(num > cont) {
        contador(num, ++cont);
    }
}