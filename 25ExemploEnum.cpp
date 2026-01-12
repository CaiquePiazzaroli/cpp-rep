#include <iostream>
using namespace std;

// Definindo um enum do jeito moderno
// Valores das constantes 0, 1, 2 , 3
enum class EstadoPersonagem {
    PARADO,
    CORRENDO,
    PULANDO,
    ATACANDO
};

// Função que reage baseada no estado recebido
void processarAcao(EstadoPersonagem estado) {
    switch (estado) {
        case EstadoPersonagem::PARADO:
            std::cout << "[Personagem] Respirando fundo... recuperando energia." << std::endl;
            break;
        case EstadoPersonagem::CORRENDO:
            std::cout << "[Personagem] Movendo-se rapido! Vuuuush!" << std::endl;
            break;
        case EstadoPersonagem::PULANDO:
            std::cout << "[Personagem] Saltando sobre o obstaculo!" << std::endl;
            break;
        case EstadoPersonagem::ATACANDO:
            std::cout << "[Personagem] Usando espada! Hiyah!" << std::endl;
            break;
    }
}

int main () {
    // Criando uma variavel do tipo enum EstadoPersonagem
    EstadoPersonagem estadoAtual = EstadoPersonagem::PARADO;
    
    processarAcao(estadoAtual);

    // Mudando o estado
    std::cout << "\n--> O jogador apertou o botao de correr..." << std::endl;
    estadoAtual = EstadoPersonagem::CORRENDO;
    
    processarAcao(estadoAtual);

    return 0;
}