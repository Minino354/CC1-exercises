// Pasar los elemntos de un vector a otro, verificando que el segundo no quedne valores repetidos
#include <iostream>
#include <vector>
using namespace std;

void pasarElementos(const vector<int>& vector1,vector<int>& vector2) {
	for (int elemento1 : vector1) {
		bool encontrado = false;
		for (int elemento2 : vector2) {
			if (elemento1 == elemento2) {
				encontrado = true;
				break;
			}
		}
		if (!encontrado) {
			vector2.push_back(elemento1);
		}
	}
}

void mostrarVector(const vector<int> & vectorx) {
	for (int num : vectorx) {
		cout << num << " ";
	}
	cout << endl;
}

int main() {
	vector<int> vector1 = {7, 7, 4, 3, 2, 5};
	vector<int> vector2 = {4, 6};
	
	mostrarVector(vector1);
	mostrarVector(vector2);
	pasarElementos(vector1,vector2);
	mostrarVector(vector2);
	return 0;
}