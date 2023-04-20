#include<iostream>
using namespace std;

int main(){
    int INDICE = 13, SOMA = 0;

    for(int k=0; k<INDICE; k++){
        k = k + 1;
        SOMA = SOMA + k;
    }

    cout << SOMA << endl; // irá imprimir 49
}