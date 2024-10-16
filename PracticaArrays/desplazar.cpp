
#include <iostream>
using namespace std;

void eliminar(int A[],int &n,int valor){
	bool encontrado = false;
	
	for (int i = 0; i < n; i++) {
		if (A[i] == valor) {
			encontrado = true;
			for (int j = i; j < n - 1; j++) {
				A[j] = A[j + 1];
			}
			n = n - 1;
			break; 
		}
	}
	
	if (!encontrado) {
		cout << "El valor " << valor << " no se encontro en el array" << endl;
	}
}
	
void mostrar(const int arr[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
		
int main() {
	int array[] = {2, 3, 5, 6, 7};
	int valor;
	int n = sizeof(array) / sizeof(array[0]);
			
	cout << "Array original: ";
	mostrar(array,n);
	cout<<"Ingrese el valor que desea eliminar:";
	cin>>valor;
	cout << "Array final: ";
	eliminar(array,n,valor);
	mostrar(array,n);
			
	return 0;
}