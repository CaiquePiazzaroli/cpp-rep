#include <iostream>
using namespace std;


int main(){
	
	int n1=10;
	
	// Primeiro jeito
	n1 = n1+1;
	
	// Segundo jeito
	n1+=1;
	
	// Terceiro jeito
	n1++;

	// Imprime o n1 e depois incrementa
	// Resultado: exibe 10 e adicionar 1 a variavel, ficando 11
	cout << n1++ << "\n\n"; 
	
	// Aqui ele incrementa antes e depois exibe no console
	// Resultado: exibe 12 no console (11 + 1)
	cout << ++n1 << "\n\n";
	
	return 0;
}
