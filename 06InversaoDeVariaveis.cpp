#include <iostream>
using namespace std;

int main(){
	
	int num=10;
	
	// Inversao Tradicional
	num = num * -1;
	
	//Inversao momentanea
	cout << -num << "\n\n"; // -10
	
	// Adiciona o inveso de num ao num
	num=-num;
	
	cout << num; // -10
	
	return 0;
}
