#include <iostream>

using namespace std;

void incercao(int vet[], int tam);

int main()
{
    
    
    
    return 0;
}

void insercao(int vet[], int tam){
    int j, i, aux;
    for(i=1; i<tam; i++)
    {
        aux = vet[i];
        for (j=i; j>0 && aux<vet[j-1]); j--)
            vet[j]=jet[j-1];
        vet[j]=aux;
    }
}