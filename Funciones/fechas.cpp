#include <iostream>
#include <string>

using namespace std;

bool EsBisiesto(int año) {
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}


void LeerFecha(int &dia, int &mes, int &año) {
    cout << "Introduce la fecha (día, mes, año): ";
    cin >> dia >> mes >> año;
}

int DiasDelMes(int mes, int año) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && EsBisiesto(año)) {
        return 29;
    }
    return diasPorMes[mes];
}

int DiaJuliano(int dia, int mes, int año) {
    int diaJuliano = dia;
    for (int m = 1; m < mes; m++) {
        diaJuliano += DiasDelMes(m, año);
    }
    return diaJuliano;
}

int main() {
    int dia, mes, año;
    LeerFecha(dia, mes, año);
    int diaJuliano = DiaJuliano(dia, mes, año);
    cout << "El día juliano es: " << diaJuliano << endl;
    return 0;
}