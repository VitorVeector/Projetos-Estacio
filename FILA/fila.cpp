#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib> 

#define TAM 5

struct queue //variavel global
{
    float f[TAM];
    int inicio, fim;
};

void enfileira(queue& fill);
void desenfileira(queue& fill);
void primeiroElem(queue& fill);
void situacaoFila(queue& fill);

using namespace std;

int main()
{
    char resp[10];
    int op;
    queue fila; //criação da fila (Struct é como se fosse um objeto)

    //Inicializa a fila
    fila.inicio = 0;
    fila.fim = -1;

    do
    {
        system("cls");
        system("color 2f");

        cout << "FILA (FIFO - FIRST IN - FIRST OUT" << endl;
        cout << endl;
        cout << "DIGITE 1 PARA - Inserir valor na fila" << endl;
        cout << "DIGITE 2 PARA - Remover valor da fila" << endl;
        cout << "DIGITE 3 PARA - Monstrar o elemento do inicio" << endl;
        cout << "DIGITE 4 PARA - Mostrar a situação da fila" << endl;
        cout << "DIGITE 5 PARA - SAIR" << endl;

        cout << "OPCAO: " << endl;
        cin >> resp;

        op = atoi(resp); 

        system("cls");

        switch (op)
        {
        case 1:
            enfileira(fila);
            break;

        case 2:
            desenfileira(fila);
            break;

        case 3:
            primeiroElem(fila);
            break;

        case 4:
            situacaoFila(fila);
            break;

        case 5:
            cout << "TCHAU!" << endl;
            break;
        default:
            cout << "OPCAO INVALIDA!";
        }

        cout << endl;
        cout << endl;
        system("pause");
        
    } while (op != 5);
    system("pause");
}

void enfileira(queue& fil)
{
    float valor;
    if(fil.fim == TAM -1) //testando se a fila está cheia
    {
        cout << "Atencao, fila cheia" << endl;
    }else{
        cout<<"Digite um valor para ser enfileirado: " << endl;
        cin >> valor;
        fil.fim++;
        fil.f[fil.fim] = valor;
    }
}

void desenfileira(queue& fil)
{
    if(fil.inicio > fil.fim) //testando se a fila está vazia
    {
        cout << "Atenção, a fila está vazia" << endl;
    }else{
        cout << "Valor removido (da primeira posição): " << fil.f[fil.inicio] << endl; //Exibe o valor "removido" na posição 0
        fil.inicio++; //Atualiza o inicio da fila
    }
}

void primeiroElem(queue& fil)
{
    if(fil.inicio > fil.fim)
    {
        cout << "Atenção, a fila está vazia" << endl;
    }else{
        cout << "Primeiro elemento da fila é " << fil.f[fil.inicio];
    }
}

void situacaoFila(queue& fil)
{
    if(fil.inicio > fil.fim)
    {
        cout << "Atenção, a fila está vazia" << endl;
    }else{
        cout << "TOTAL DE ELEMENTOS DA FILA: " << fil.fim - fil.inicio + 1 << endl;
        cout << "ESPACO DISPONIVEL NA FILA: " << TAM-(fil.fim+1) << endl;
        cout << "POSICAO DO PRIMEIRO ELEMENTO DA FILA: " << fil.inicio << endl;
        cout << "POSICAO DO ULTIMO ELEMTNDO DA FILA: " << fil.fim << endl;
        cout << "PARA FINS DIDATICOS, EXIBINDO A FILA "<< endl;
        for ( int x = fil.inicio; x<= fil.fim; x++)
        cout << fil.f[x] <<":"<< x << endl;
    }
}