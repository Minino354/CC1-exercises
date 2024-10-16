#include <iostream>

using namespace std;

void ingresar(int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "]? ";
		cin >> A[i];
	}
}

void mostrar(int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

bool pertenece(int A[], int n, int elemento) {
	for (int i = 0; i < n; i++) {
		if (A[i] == elemento) {
			return true;
		}
	}
	return false;
}

int suma(int A[], int n) {
	int total = 0;
	for (int i = 0; i < n; total += A[i], i++);
	return total;
}

int mayor(int A[], int n) {
	int mayor = A[0];
	for (int i = 1; i < n; i++) {
		if (A[i] > mayor) {
			mayor = A[i];
		}
	}
	return mayor;
}

float promedio(int A[], int n) {
	float sum = 0.0;
	sum = suma(A, n);
	return sum / n;
}

void mostrarRep(int A[], int n) {
	int pasados[20] ; 
	for (int i = 0; i < n; i++) {
		if (pertenece(pasados, n, A[i]) == false) {
			int con = 0;
			for (int j = 0; j < n; j++) {
				if (A[i] == A[j]) {
					con++;
				}
			}
			pasados[i] = A[i]; 
			cout << "El elemento " << A[i] << " esta " << con << " veces repetido" << endl;
		}
	}
}

int main() {
	int A[20], n, numerox;
	cout << "Cantidad de elementos: ";
	cin >> n;
	
	ingresar(A, n);
	cout << "El arreglo contiene: ";
	mostrar(A, n);
	
	cout << "Verificar si pertenece: "; 
	cin >> numerox;
	if (pertenece(A, n, numerox)) {
		cout << "Si pertenece." << endl;
	} else {
		cout << "No pertenece." << endl;
	}
	
	cout << "La suma de los elementos del array: " << suma(A, n) << endl;
	cout << "El mayor de los elementos del array: " << mayor(A, n) << endl;
	cout << "El promedio de los elementos del array: " << promedio(A, n) << endl;
	
	mostrarRep(A, n);
	
	return 0;
}