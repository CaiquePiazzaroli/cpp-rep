#include <iostream>
using namespace std;

// Definimos um valor constante de pi
#define pi 3.1415

// Podemos tambem definir declarações inteiras
#define canal cout << "Canal Fessor Bruno\n";

int main() { 
	
	// Declarando multiplas variaveis em uma linha só
	int vidas=3, tiros=500, life=100;
	
	cout << "Valor de pi: " << pi << "\n";
	
	// Usando a define canal
	// Não é necessário usar o ; pois ja colocamos no define
	canal
 
	return 0;
}
