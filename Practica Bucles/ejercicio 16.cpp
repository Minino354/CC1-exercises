#include <iostream>
#include <string>

/* Determinar cuántos hombres y cuantas mujeres se encuentran en un grupo de n personas, 
suponiendo que los datos son extraídos alumno por alumno. */
using namespace std;

int main(){
    int n;
    int con = 0;
    string genero;
    int mujeres = 0;
    int hombres = 0;

    cout<<"Cuantos alumnos hay?";cin>> n;
    while(con<n){
        cout<<"Eres hombre o mujer? "; cin>> genero;
        if (genero=="hombre"){
            hombres++;
        }
        if (genero=="mujer"){
            mujeres++;
        }
        con++;
    }

    cout<< "Hay " << mujeres<<" mujeres"<<'\n';
    cout<<"Hay " << hombres << " hombres";
    return 0;
}