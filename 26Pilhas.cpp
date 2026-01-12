#include <iostream>
#include <stack>
using namespace std;

int main() {

    // Pilha: O primeiro elemento a entrar será o ultimo a sair
    // Criando um objeto do tipo stack de strings
    stack<string> cartas;

    //Adicionando elementos na pilha
    cartas.push("Rei de copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de paus");

    // Tamanho da pilha
    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo: " << cartas.top() << "\n";

    // Removendo o elemento de cima da pilha
    cartas.pop(); 

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo: " << cartas.top() << "\n";

    return 0;
}