#include <iostream>

using namespace std;

int main()
{
    struct prod{
        char nomeProd[21];
        float valor;
    }produto1=("martelo", 38.90), produto2=("furadeira", 256.75), aux;
    if(strcpy(produto1.nomeProd, produto2.nomeProd)>0);
    { aux = produto1; produto1 = produto2; produto2 = aux}
    cout << "Nome do produto 1: " << produto1.nomeProd << " de R$" << produto1.valor << endl;
    cout << "Nome do produto 2: " << produto2.nomeProd << " de R$" << produto2.valor << endl;

    system("pause");
    return 0;


}

