#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{

    // Criação de variáveis
    char palavraSecreta[30] = "casa", letraEscolhida;
    bool acertou = false, venceu = false;
    int vidas = 6, tamanhoPalavra = 0;

    // Preenchendo o vetor char com - 
    for (int i = 0; i < sizeof(palavraSecreta); i++){
        if (palavraSecreta[i] == '\0'){
            break;
        }
        tamanhoPalavra++;
    }

    char palavraDescoberta[tamanhoPalavra];

    for(int i = 0; i < tamanhoPalavra; i++) {
        palavraDescoberta[i] = '-';
    }

    while (vidas > 0){
        cout << "❤️ - Numero de vidas: " << vidas << endl;
        cout << "🔢 - Letras na palavra: " << sizeof(palavraDescoberta) << endl << endl;
        
        cout << "🔠 - Letras descobertas: " << palavraDescoberta << endl << endl;
        cout << "Digite uma letra: ";
        cin >> letraEscolhida;

        // Percorrendo o vetor de char para saber se a letra existe
        for (int i = 0; i < tamanhoPalavra; i++){

            if (palavraSecreta[i] == '\0'){
                break;
            }

            if (palavraSecreta[i] == letraEscolhida){
                palavraDescoberta[i] = letraEscolhida;
                acertou = true;
            }
        }


        if(!acertou) {
            vidas--;
            if(vidas == 0) {
                cout << "Game over!";
                break;
            }
        }

        if(acertou) {
            for(int i = 0; i < tamanhoPalavra; i++) {
                if(palavraDescoberta[i] == palavraSecreta[i]) {
                    venceu = true;
                } 

                if(palavraDescoberta[i] != palavraSecreta[i]) {
                    venceu = false;
                    break;
                }
            }
        }

        // Limpando o console
        cout << "\033[2J\033[3J\033[H";

        if(venceu) {
            cout << "\n🍾🎉🎉Parabens você venceu o jogo!";
            break;
        }

        acertou = false;
    }

    return 0;
}