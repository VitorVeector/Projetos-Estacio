#include <iostream>

using namespace std;
void batalha();
int main()
{
    struct personagem{
        char nome[31], tipo[10];
        int vida, power;
    };
    personagem vilao, heroi;
    cout << "Digite o nome do seu vilao: " << endl;
    cin.getline(vilao.nome, 31);
    cout << "Digite o seu poder de forca de o a 10: " << endl;
    cin >> vilao.power;
    cin.get();



    cout << "Digite o nome do seu heroi: " << endl;
    cin.getline(heroi.nome, 31);
    cout << "Digite o seu poder de forca de 0 a 10: " << endl;
    cin >> heroi.power;
    cin.get();

    batalha();

    if (vilao.power > heroi.power){
        cout << "O Vilao " << vilao.nome << " ganha do Heroi "<< heroi.nome  <<endl;
    }else{
    cout << "O Heroi "<< heroi.nome << " ganha do Vilao "<< vilao.nome <<endl;
    }
    return 0;
}
void batalha()
{
    cout << "*-*-*-*-*    FIGHT     *-*-*-*-*" << endl;
}
