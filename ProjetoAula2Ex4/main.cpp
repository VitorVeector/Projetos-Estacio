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
    cout << "X � igual a: " << x << endl;
    cout << "N � igual a: " << n << endl;
    return 0;
}
//Fun��o que troca valores de duas vari�veis
void troca(float &a, float &b){
    float aux;
    aux = a;
    a=b;
    b=aux;
}
