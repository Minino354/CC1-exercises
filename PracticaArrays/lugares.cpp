
// Devolver todas las posiciones donde se encuentra a un valor X dentro del arreglo, si no
// está el valor devolver -1.

#include <iostream>
using namespace std;

void indices(int A[], int n, int valor) {
    for(int i = 0; i < n; i++) {
        if (A[i] == valor) {
            cout << i << " ";
        }
    }
}

int main() {
    int array[] = {2, 3, 5, 6, 7};
    int valor;
    int n = sizeof(array) / sizeof(array[0]);
    
    cout<<"Ingrese el valor:";
    cin>>valor;
    indices(array, n, valor);
    return 0;
}
