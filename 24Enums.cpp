#include <iostream>
using namespace std;

int main() {

    cout << "Aprendendo enums\n";

    // Enum com quatro tipos
    // Por padrao recebe 0, 1, 2, 3
    // Cada uma dessas constantes poderiam receber valores
    // enum armas{fuzil=100, revolver=6, rifle=1, escopeta=2};
    enum armas{fuzil,revolver,rifle,escopeta};
    
    // Cria uma variável do tipo armas 
    armas armaSel;

    // Atribuindo um valor para a variavel armaSel
    // A variavel armaSel pode apenas receber um dos quatro valores:
    // fuzil, revolver, rifle ou escopeta
    armaSel = fuzil;

    cout << armaSel; // Imprime 0 pois fuzil é igual a 100;


    return 0;
}