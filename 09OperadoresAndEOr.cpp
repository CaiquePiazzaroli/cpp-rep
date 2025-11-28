#include <iostream>
using namespace std;

int main(){ 

	
	
	// 1 2 3 4 5 6 7 8 9 10
	// testar: valores >4 E <7
	int num1 = 8; // Passa em num1 > 4 mas não passa em num1 < 7 (false)
	if(num1 > 4 && num1 < 7){
		cout << "Valor aceito!\n";
	} else {
		cout << "Nao aceito!\n";
	}
	
	
	// testar: valores >4 OU <7
	//Nao passa em num2/2 == 0 mas passa em num2 < 0 (true)
	int num2 = -1; 
	if(num2/2 == 0 || num2 < 0){
		cout << "Valor aceito!\n";
	} else {
		cout << "Nao aceito!\n";
	}

	// testar: Negação
	bool boleano = true;
	
	if(!boleano) {
		cout << "e verdadeiro";
	} else { 
		cout << "e falso"; //Executa esse
	}
	

	return 0;

}
