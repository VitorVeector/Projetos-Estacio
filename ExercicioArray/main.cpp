#include <iostream>

using namespace std;

int main()
{
    struct prodCad{
        int cod;
        float precoCompra, precoVenda;
    };
    prodCad produtos [TAM];
    int x, num;
    for (x=0; x<TAM; x++){
        cout << "Código do produto 0-10000: ";
        cin>>num;
        while(num>0 || num >10000) {
            cout << "Codigo Invalido" << endl;
            cout << "Codigo do produto 0 - 10000: " << endl;
            cin >> num ;

        }
        protudos[x].codigo=num;
        cout << "Preço compra: " << endl;

    }


    return 0;
}
