#include <iostream>

using namespace std;

struct data{ //Estrutura global que estara em outra estrutura, no caso, PAGTO
    int dia, mes, ano;
};

int main()
{
    struct pagto{
        int codigo;
        float valor;
        data venc;
    };
    pagto promissorias[2];
    int x;
    for (x=0; x<2; x++){
        cout << "C�digo: " << endl;
        cin >> promissorias[x].codigo;
        cout << "Valor: " << endl;
        cin >> promissorias[x].valor;
        cout << "Data de vencimento: (Digite cada valor DIA/MES/ANO e precione ENTER)" << endl;
        cin >> promissorias[x].venc.dia >> promissorias[x].venc.mes >> promissorias[x].venc.ano;
    }
    system("cls"); //Fun��o que limpa a tela
    cout << "***|CODIGO|***\****|VALOR|****\*|VENCIMENTO*|" << endl;
    for(x=0; x<2; x++)
    {
        cout << "|***" << promissorias[x].codigo << "***| |****" << promissorias[x].valor << "****| |*" << promissorias[x].venc.dia << "/" << promissorias[x].venc.mes << "/" << promissorias[x].venc.ano;
        system("pause");
    }
    return 0;
}
