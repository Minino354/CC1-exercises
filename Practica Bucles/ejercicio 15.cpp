
// En un centro de verificación de automóviles se desea saber 
// el promedio de puntos contaminantes de los primeros 25 automóviles 
// que lleguen. Asimismo, se desea saber los puntos contaminantes del carro que
//  menos contaminó y del que más contaminó.

#include <iostream>

using namespace std;

int main(){
    int n = 25;
    int max=-999999;
    int min=999999;
    int puntos;
    for (int i=0;i<n;i++){
        cout<<"Ingrese los puntos contaminantes del automovil "<<(i+1)<< ' ';cin>> puntos;
        min = puntos<min? puntos: min;
        max = puntos>max? puntos: max;
    }
    cout << '\n';
    cout<<"El carro que menos contamino tuvo "<<min <<" puntos contaminantes."<<'\n';
    cout<<"El carro que mas contamino tuvo "<<max << " puntos contaminantes.";
    return 0;
}