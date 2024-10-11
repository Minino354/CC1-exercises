/*El programa determina el precio de un boleto de ida y vuelta en ferrocarril, 
conociendo la distancia a recorrer y sabiendo que si el número de días de estancia 
es mayor o igual a 7 y la distancia mayor o igual a 100 kilómetros, el boleto tiene 
una reducción del 50%. El precio por kilómetro es de 1 dólar.*/

#include <iostream>
using namespace std;

int main() {
	float distancia;
	int dias;
	float boleto;
	float dsct=0;
	
	cout << "Ingrese la distancia en km: "; cin >> distancia;
	cout << "Ingrese el numero de dias de estancia: "; cin >> dias;
	
	boleto = distancia*1;
		
		if (dias>=7 && distancia>= 100){
			dsct = 0.5;
			boleto = boleto - boleto*dsct;
	}
		
		dsct == 0.5? cout << "Felicidades. Tuvo un descuento de 50 porciento en su boleto. El precio de su boleto es:" << boleto :
			cout << "El precio de su boleto es: " << boleto << '\n';
		
		return 0;
}

