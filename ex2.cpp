#include <iostream>
using namespace std;

int main() {
    int num, primeiro = 0, segundo = 1, proximo;

    cout << "Digite um número inteiro para calcular a sequência de Fibonacci: ";
    cin >> num;

    cout << "Sequência de Fibonacci com " << num << " termos:" << endl;

    for (int i = 0; i < num; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
            if(primeiro==num){
        cout << "pertence" << endl;
    } else {
        cout << "nao pertence" << endl;
    }
        }
        cout << proximo << " ";
    }

    cout << endl;
    return 0;
}
