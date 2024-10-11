
// Simular el comportamiento de un reloj digital, imprimiendo la hora, minutos y 
// segundos de un día desde las 0:00:00 horas hasta las 23:59:59 horas

#include <iostream>
#include <string>
using namespace std;

string formatoHora(int horas, int minutos, int segundos) {
    string h = (horas < 10) ? "0" + to_string(horas) : to_string(horas);
    string m = (minutos < 10) ? "0" + to_string(minutos) : to_string(minutos);
    string s = (segundos < 10) ? "0" + to_string(segundos) : to_string(segundos);
    return h + ":" + m + ":" + s;
}

int main(){
    for (int h = 0; h < 24; h++) { 
        for (int m = 0; m < 60; m++) { 
            for (int s = 0; s < 60; s++) { 
                 cout << formatoHora(h, m, s) << '\n';
            }
        }
    }
    
    return 0;
}