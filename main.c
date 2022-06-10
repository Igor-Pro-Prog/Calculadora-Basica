#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int num1, num2, soma, sub, multi, div;

    cout << "Seja bem vindo a minha primeira calculadora" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    cout << "A soma e: " << num1 + num2 << endl;
    cout << "A subtracao e: " << num1 - num2 << endl;
    cout << "O produto e: " << num1 * num2 << endl;
    cout << "A divisao e: " << num1 / num2 << endl;


    system("pause");
    return 0;
}