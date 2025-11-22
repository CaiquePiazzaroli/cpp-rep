#include <iostream>
using namespace std;

int main(){
	
	// Atribuindo uma variável
	// TIPO NOME;
	// TIPO NOME = VALOR;
		
	int vidas = 0; // Pode receber 10, 25, 1, -2 etc
	char letra = 'B'; // Pode receber 'B'
	double decimal = 5.2; // Pode receber 2.499999999999
	float decimal2 = 5.2; // Identico ao double mas menos preciso, pode receber 2.5  
	bool vivo=true; // true ou false
	string nome= "caique"; // Recebe um texto: "Caique"
	
	
	
	// Lendo valores do teclado
	cout << "Digite o número de vidas: ";
	
	// Le do teclado e armaazenda em vidas
	cin >> vidas;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	cout << "Dinheiro: ";
	cin >> decimal;
	
	cout << "Digite seu nome: ";
	cin >> nome;
	
	
	// Printando na tela
	cout << vidas << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << vivo << "\n";
	cout << nome << "\n";
	
	return 0;
}
