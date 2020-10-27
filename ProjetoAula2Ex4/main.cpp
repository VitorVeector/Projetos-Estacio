#include <iostream>

using namespace std;
void troca(float &a, float &b);
int main()
{
    float x, n;
    cout << "Digite um valor para X: " << endl;
    cin >> x;
    cout << "Digite outro valor para N: " << endl;
    cin >> n;
    troca(x, n);
    cout << "------------" << endl;
    cout << "APOS A TROCA:" << endl;
    cout << "X é igual a: " << x << endl;
    cout << "N é igual a: " << n << endl;
    return 0;
}
//Função que troca valores de duas variáveis
void troca(float &a, float &b){
    float aux;
    aux = a;
    a=b;
    b=aux;
}
