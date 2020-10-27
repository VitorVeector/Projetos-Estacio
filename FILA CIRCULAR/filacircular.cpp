#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib> 

using namespace std;

#define TAM 5

int comeco = 0;
int tamanho = 0;
int queue[TAM];

void enfileirar(int);
void desenfileirar(void);

int main()
{
    int i;

    enfileirar(10);
    enfileirar(20);
    enfileirar(30);
    enfileirar(40);
    enfileirar(50);

    for (i=0; i < tamanho; i++)
    {
        cout << queue[i] << endl;
    }

    desenfileirar();

    cout << endl;

    for(i=0; i<tamanho; i++)
    {
        cout << queue[i] << endl;
    }

    enfileirar(60);

    cout << endl;

    for(i=0; i<tamanho; i++)
    {
        cout << queue[i] << endl;
    }
    //return 0;
    system("pause");

}
using namespace std;


void enfileirar(int elemento)
{
    int pos;

    if (tamanho == TAM)
    {
        cout << "Fila Cheia" << endl;
    }else{
        pos = (comeco + tamanho) % TAM;
        queue[pos] = elemento;
        tamanho++;
    }
}

void desenfileirar()
{
    if (tamanho == 0)
    {
    cout << "FILA CHEIA" << endl;
    }else{
        comeco++;
        tamanho--;

    }
}