#include <iostream>

using namespace std;
//Ejercicio 18

int main(){
    float presupuesto, precio;
    string articulo;
    float cantidad;
    float total = 0;

    cout << "Ingrese su presupuesto: "; cin >> presupuesto;

    while (true) {
        cout << "Ingrese el articulo elegido: "; cin >> articulo;
        cout << "Ingrese la cantidad: "; cin >> cantidad;
        cout << "Ingrese el precio: "; cin >> precio;

        float nuevoTotal = total + (cantidad * precio);

        if (nuevoTotal > presupuesto) {
            cout << "Detente. Estás a punto de exceder tu presupuesto. Tu total actual es: " 
                 << total << endl;
            break; 
        }

        total = nuevoTotal; 
        cout << "Total hasta ahora: " << total << endl; 
    }

    cout << "Tu total final es: " << total << endl;

    return 0;
}