
// Suponga que se tiene un conjunto de calificaciones de un grupo de 10 alumnos. 
// Realizar un algoritmo para calcular la calificación media y la calificación mas 
// baja de todo el grupo.

#include <iostream>

using namespace std;

int main(){
    int n = 10;
    int suma = 0;
    int men = 99999999;
    int nota;
    for (int i=0;i<n;i++){
        cout<<"Agregue una nota: "; cin>> nota;
        suma += nota;
        if (nota<men){
            men = nota;
        }
    }
    cout << "La media es " << suma/n<<'\n';
    cout << "La menor nota es " << men;
}