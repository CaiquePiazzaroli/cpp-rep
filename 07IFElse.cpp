#include <iostream>
using namespace std;

#include <string>
using namespace std;

int main() {
	
	// Comparando dois numeros
	int number1 = 7;
	int number2 = 10;
	if(number1 > number2) {
		cout << number1 << " e maior que " << number2 << endl;
	} else {
		cout << number2 << " e maior que " <<  number1 << endl;
	}
	
	
	// Comparando uma string
	string name = "caique";
	if(name == "caique") {
	 	cout << "Parabens " << name << endl;
	}
	
	// Usando 0 ou 1 como valor booleano
	int sol = 0;
	if(sol) {
		cout << "Vou a praia!" << endl;
	} else {
		cout << "Vou ao cinema!" << endl;
	}
	
	return 0;
}
