#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Metodos: emtpy, size, front, back, push, pop
    queue <string> cartas;
    cartas.push("Rei de copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de paus");

    cout << "Tamanho da fila: " << cartas.size() << endl; // 4
    cout << "Primeiro Elemento da fila: " << cartas.front() << endl; // Rei de copas (primeiro a entrar)
    cout << "Ultimo Elemento da fila: " << cartas.back() << endl; // Rei de paus (ultimo a entrar)
    
    // Removendo o proximo elemento da fila (No caso, o primeiro)
    cartas.pop(); // Rei de paus será removido

    cout << "Primeiro Elemento da fila depois de removido o anterior: " << cartas.front() << endl; // Rei de espadas

    while (!cartas.empty())
    {
        cout << "Removendo o elemento: " << cartas.front() << endl; // Espadas, ouros e depois paus
        cartas.pop();
    }
    


    return 0;
}