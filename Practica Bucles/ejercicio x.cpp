#include <iostream>
#include <string>

using namespace std;

int main(){
    string numero;

    cout << "Ingresa un número: ";
    cin >> numero;

    int contador = 0;

    
    for (int i = 0; i < numero.length(); i++) {
        if (numero[i] != '-') { 
            contador++;
        }
    }

    cout << "El valor ingresado tiene " << contador << " dígitos." << endl;

    return 0;
}