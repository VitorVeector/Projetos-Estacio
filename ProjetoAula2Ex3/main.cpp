#include <iostream>

using namespace std;
float areaRetangulo(float base, float altura);
void espaco();
int main()
{
    float x, b;
    cout << "Digite o valor da base do retangulo: "<< endl;
    cin >> x;
    cout << "Digite o valor da altura do retangulo: " << endl;
    cin >> b;
    espaco();
    cout << "A area total do retangulo � de: " << areaRetangulo(x, b) << " metros quadrados" << endl;
    return 0;
}
//Fun��o que receba valores correspondentes a base e a altura de um ret�ngulo
float areaRetangulo(float base, float altura){
    return base*altura;
}
void espaco (){
    cout << "--------------------" << endl;
}
