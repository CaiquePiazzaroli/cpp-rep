#include <iostream>
using namespace std;

int main() {

    int value = 100;

    do{
        // Esse código será executado pelo menos uma vez
        cout << "Valor do numero: " << value << endl;
        value++;
    } while (value < 100);
    
    
    return 0;
}