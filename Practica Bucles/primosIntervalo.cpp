#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Numeros primos entre [a, b]" << endl;
    cout << "a? ";
    cin >> a;
    cout << "b? ";
    cin >> b;

    for (int i = a; i <= b; i++) {
        int contador = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                contador++;
            }
        }
        if (contador == 2) {
            cout << i << " ";
        }
    }

    return 0;
}