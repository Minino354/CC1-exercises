#include <iostream>
using namespace std;
//ejercicio

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return suma(a, -b);
}

int multiplicacion(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado = suma(resultado, a);
    }
    return resultado;
}

int main() {
	bool start = true;
	int operacion;
	int a;
	int b;

    cout << "Ingrese el valo de a y b? "; cin>>a>>b;
	
	// Menu
	cout << "Presione 1 para sumar\n";
	cout << "Presione 2 para restar\n";
	cout << "Presione 3 multiplicar\n";
	cout << "Presione 4 para salir\n";
	
	while (start) {
		
		cin >> operacion;
		
		switch (operacion) {
		case 1:  
            cout << "La suma de a y b es: " << suma(a, b) << endl;
			break;
		case 2:  
            cout << "La resta de a y b es: " << resta(a, b) << endl;
			break;
		case 3:  
            cout << "La multiplicacion de a y b es: " << multiplicacion(a, b) << endl;
			break;
				
		case 4: 
			cout<<"Saliendo del programa...";
			break;
		default:
			cout << "NO EXISTE OPERACION" << '\n';
			break;
		}
	}
	
	return 0;
}
