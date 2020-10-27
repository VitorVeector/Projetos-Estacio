#include <iostream>

using namespace std;



struct dados
{
    int matric;
    float CR;
};

void pulaLinha();
void insercao(dados vetor[], int tam);

int main()
{
    dados vet[]={13, 9.5, 23, 3, 8, 10, 10};
    system("cls");
    cout << "Antes da chamada da funcao INCERCTION SORT: " << endl;
    for(int x = 0; x < 3; x++)
    cout << vet[x].matric << ", " << vet[x].CR;
    pulaLinha();  
    

insercao(vet, 3);

    cout << "Depois da chamada da funcao INCERCTION SORT: " << endl;
    for(int x = 0; x<3; x++)
    cout << vet[x].matric << ", " << vet[x].CR;
    pulaLinha();
    
    system("pause");
    return 0;
}

void pulaLinha()
{
    cout << endl;
    cout << endl;
}

void insercao(dados vetor[], int tam)
{
    int i, j;
    dados aux;
    for(i = 1; i < tam; i++)
    {
        aux = vetor[i];
        for(j = i; j > 0 && aux.CR < vetor[j-1].CR; j--)
            vetor[j]=vetor[j-1];
        vetor[j]=aux;    
    }

}

