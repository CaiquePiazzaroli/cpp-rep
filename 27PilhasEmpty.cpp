#include <iostream> 
#include <stack>
using namespace std;

int main() {
    
    // Criando uma pilha
    stack<double> notasAluno;

    notasAluno.push(10.0);
    notasAluno.push(2.0);

    cout << "Notas Aluno: " << notasAluno.top() << "\n";

    cout << "A pilha está vazia? " << notasAluno.empty() << "\n";

    // Esvasiando a pilha com o método empty
    while (!notasAluno.empty()){
        notasAluno.pop();
    }

    cout << "A pilha está vazia? " << notasAluno.empty() << "\n";


    return 0;
}