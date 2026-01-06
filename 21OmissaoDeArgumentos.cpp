#include <iostream>
#include <string>
using namespace std;

// Definindo um valor padrão ao argumento no protótipo
void imp(string name="Jon Doe");

int main() {

    imp(); // Jon Doe
    
    imp("Caique"); // Caique

    return 0;
}

void imp(string name) {
    cout << name << endl;
}