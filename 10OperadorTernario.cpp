#include <iostream>
using namespace std;

int main() {
	
	cout << "Operador ternário (If Simplificado) \n\n";
	
	// (Expressao) ? valor1 : valor2;
	
	int n1, n2, nota;
	string res;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota = n1 + n2;
	
	// >=60: Aprovado
	// <60: Reprovado
	
	// Operador ternário
	//(nota >= 60) ? res="Aprovado" : res="Reprovado";
	
 	// Retorna o valor para a variavel
 	res = (nota >= 60) ? "Aprovado" : "Reprovado";

	
	cout << "\nSituacao do aluno: " << res << endl;
	
	int x = 9;
	
	(x == 9) ? x++ : x--;
	
	cout << "O valor de X é: " << x;
	
	return 0;
}
