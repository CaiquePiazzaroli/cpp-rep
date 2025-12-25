#include <iostream>
using namespace std;

int main() {

    //Declarando um vetor de inteiros de tamanho 5
    int vetor[5] = {10,20,30,40,56};


    //Acessando o valor no indice 0 do vetor
    cout << vetor[0] << endl; //10


    //Acessando o valor no indice 3 do vetor
    cout << vetor[3] << endl; //40

    //Acessando o valor no indice 5, que não possui posição definida na declaração do array
    // cout << vetor[6] << endl; //Exibe um valor de lixo (um numero aletório de memoria)

    cout << "Escrevendo todos os valores do array usando um loop for:\n";
    for(int i=0; i<5; i++){
        cout << vetor[i] << endl;
    }

    cout << "Usando o sizeof para descobrir o tamanho o array: " << endl;
    cout << "Tamanho do vetor em bytes: " << sizeof(vetor) << endl;

    //Cada calor no vetor tera 4 bytes, então, se dividirmos a quantidade maxima em bytes por 4
    // teremos a quantidade de itens do vetor

    for(int i=0; i< sizeof(vetor)/4; i++){
        cout << vetor[i] << endl;
    }


    return 0;
}