#include <iostream>

using namespace std;

void pulaLinha();
void insere(int codigo[], int &t, int tamanho);
void exibe (int codigo[], int t);
void elemento(int codigo[], int t );

int main()
{
    int tam, codigoProd[5], op;

    tam = 0;

    do
    {
    system("cls");   
    cout << "MENU - Lista" << endl;
    pulaLinha();
    cout << "0 - Reset a LISTA" << endl;
    cout << "1 - Inserir codigo na LISTA" << endl;
    cout << "2 - Exibir LISTA" << endl;
    cout << "3 - Exibe tamanho da LISTA" << endl;
    cout << "4 - Exibe um elemento da LISTA" << endl;
    cout << "5 - Sair" << endl;
    pulaLinha();
    cout << "Opcao: " << endl;
    cin >> op;
    switch(op)
    {
        case 0: //REINICIA
        tam = 0;
        break;

        case 1: insere(codigoProd, tam, 5);
        break;

        case 2: exibe(codigoProd, tam);
        break;

        case 3: cout << "Tamanho da lista: " << tam;
        break;

        case 4: elemento(codigoProd, tam);
        break;

        case 5: cout << "FINALIZANDO PROGRAMA DA LISTA";
        break;

        default: cout << "OPCAO INVALIDA";
        
    }
    pulaLinha();
    system("pause");
    }while (op !=5);
}
void pulaLinha(){
    cout << endl;
}


void insere(int codigo[], int &t, int tamanho)
{
    int prod;
    if (tamanho == 0){
        cout << "Atencao!!! LISTA cheia." << endl;
    }else{
        cout << "Digite o codigo do produto a ser inserido: " << endl;
        cin >> prod;
        codigo[t] = prod;
        t++;
    }
}


void exibe (int codigo[], int t)
{
    int x;
    if (t == 0){
        cout << "Atencao!!! LISTA vazia." << endl;
    }else{
        cout << "Relacao dos Codigos." << endl;
        for (x = 0; x < t; x++)
            cout << codigo[x] << endl;
    }
}
void elemento(int codigo[], int t )
{
    int prod, posicao;
    if (t == 0){
        cout << "Atencao!!! LISTA vazia." << endl;
    }else{
        cout << "Qual a posicao que deseja? " << endl;
        cin >> posicao;
        posicao--;
        if(posicao >= t){
        cout << "Posicao inexistente ou codigo ainda nao armazenado" << endl;
        }else{
            cout << "Codigo: " << codigo[posicao] << endl;
        }
        
    }
}