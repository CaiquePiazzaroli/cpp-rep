#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



int main() {
	
	int n1, n2, res;
	char opc; 
	
	// Label inicio
	inicio:
	
	// Limpa o console
	system("cls");	
	
	cout << "Digite o valor para a nota 1: ";
	cin >> n1;
	
	cout << "Digite o valor para a nota 2: ";
	cin >> n2;
	
	res = n1 + n2;
	
	// nota >= 60: aprovado
	// 40 >= nota <= 59: Recuperação
	// nota < 40: Reprovado
	
	if(res >= 60) {
		cout << "Aprovado!\n";
	} else if(res >= 40) {
		cout << "Recuperacao\n";
	} else {
		cout << "Reprovado!\n";
	}
	
	cout << "\nDigitar outras notas?[s/n]: ";
	cin >> opc;
	
	if(opc == 's' or opc == 'S') {
		// Retorna para a label inicio
		goto inicio;
	}
	
	return 0;
	
}
