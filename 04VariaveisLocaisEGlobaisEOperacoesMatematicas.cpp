#include <iostream>
using namespace std;

// Variaveis globais, podem ser acessadas de qualquer lugar
int n1, n2;


int main(){
	
	// Operadores matemátcos: + - / * % ()
	
	// Possui escopo local, só podem ser acessadas pela função main
	int n3, n4;
	int res, resModulo1, resModulo2;
	
	// Não estao declarados na função mas podem ser usadas aqui dentro
	n1=12;
	n2=3;
	
	// Variaveis locais sendo utilizadas
	n3=5;
	n4=2;
	
	// Exemplo de expressao matemática
	//res=(n1+n2+n3+n4)-10;
	
	// Outro exemplo
	res=n1+n2*n4; // resultado 17
	
	
	// Outro exemplo usando o operador %
	resModulo1 = n1/n2;
	resModulo2 = n1%n2;
	
	
	cout << "A soma de todas as variaveis: " << res << "\n\n";
	
	cout << "#### Usando o operador % ####\n" << "Divisão n1/n2: " << resModulo1 << endl;
	cout << "Resto da divisao n1/n2: " << resModulo2 << "#### Fim ####" << endl;
	
	return 0;
}
