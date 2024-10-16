//Copiar el contenido de dos arrays a un tercero sin que se guarde valores repetidos

#include <iostream>
using namespace std;

void pasarElementos(int origen[], int tamOrigen, int destino[], int& tamDestino) {
	for (int i = 0; i < tamOrigen; i++) {
		bool encontrado = false;
		for (int j = 0; j < tamDestino; j++) {
			if (origen[i] == destino[j]) {
				encontrado = true;
				break;
			}
		}
		if (!encontrado) {
			destino[tamDestino] = origen[i];
			tamDestino++;
		}
	}
}

void mostrarArray(const int arr[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int array1[] = {4,10,3};
	int array2[] = {4,5,6};
	
	int tam1 = sizeof(array1) / sizeof(array1[0]);
	int tam2 = sizeof(array2) / sizeof(array2[0]);
	
	int array3[100];
	int tam3 = 0;
	
	pasarElementos(array1, tam1, array3, tam3);
	pasarElementos(array2, tam2, array3, tam3);
	
	cout << "Array 3 combinado sin duplicados: ";
	mostrarArray(array3, tam3);
	
	return 0;
}