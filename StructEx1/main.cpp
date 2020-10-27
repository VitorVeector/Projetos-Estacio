#include <iostream>

using namespace std;

struct carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};
int main()
{
    carro car1;
    carro car2;

    car1.nome="BMW";
    car1.cor="branco";
    car1.pot="500";
    car1.velMax="230";

    car2.nome="Gol";
    car2.cor="Azul";
    car2.pot="240";
    car2.velMax="200";

    cout << "Nome do carro:.......... " <<car1.nome << endl;
    cout << "Cor do carro:........... " << car1.cor << endl;
    cout << "Potência:............... " << car1.pot << endl;
    cout << "Velocidade máxima:...... " <<  car1.velMax << endl;

    return 0;
}
