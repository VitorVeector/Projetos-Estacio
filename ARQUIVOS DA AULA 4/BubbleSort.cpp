#include <iostream>

using namespace std;

int main()
{
    
    return 0;
}

void bolha(int vet[], int tam)
{
    int j, i, aux;
    for (i=0; i <tam-1; i++)
    for(j=tam-1; j>i; j--)
    if(vet[j] < vet[j-1])
    {
        aux=vet[j];
        vet[j]=vet[j-1];
        vet[j-1]=aux;
    }
}