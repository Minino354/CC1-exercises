#include <iostream>

using namespace std;

int potencia(int n, int x){
    int producto =1;
    for (int i =0; i<x; i++){
        producto *= n;
    }
    return producto;
}

int main(){
    cout<<potencia(2,3);
    return 0;
}