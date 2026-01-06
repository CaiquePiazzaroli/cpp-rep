#include <iostream>
using namespace std;

void fatorial(int numeroFatorial, int valorFatorial = 1);
void fibonacci(int ntermos, int termo = 1, int anterior = 0);

int main() {
    
    //fatorial(6);

    fibonacci(11);

    return 0;
}


/*
  RESOLUÇÃO do professor
  int fatorial(int n) {
    if(n==0) {
        return 1;
    }
    return n*fatorial(n-1);
  }
*/
void fatorial(int numeroFatorial, int valorFatorial) {

    numeroFatorial != 1?   cout << numeroFatorial << " x ": cout << numeroFatorial << " = ";

    valorFatorial *= numeroFatorial;

    if(numeroFatorial != 1) {
        fatorial(--numeroFatorial, valorFatorial);
    } else {
        cout << valorFatorial << endl;
    }

}


/*
  RESOLUÇÃO do professor
  int fibonacci(int n) {
    if(n==1 || n==2) {
        return 1;
    } else {
        return fobonacci(n-1)+fibonacci(n-2);
    }
  }
*/
void fibonacci(int ntermos, int termo, int anterior) {
    
    ntermos != 1? cout << termo << ", " : cout << termo << endl;
    
    int novotermo = termo + anterior;

    anterior = termo;

    if(ntermos != 1) {
        fibonacci(--ntermos, novotermo, anterior);
    }
}