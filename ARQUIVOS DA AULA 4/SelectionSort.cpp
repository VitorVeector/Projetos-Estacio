#include <iostream>

using namespace std;


int main ()
{
    cout << "" << endl;
    return 0;
}


void selecao (int vet[], int tam)
{
    int j, i, aux, temp;
    for(i=0; i<tam; i++)
    {
        aux=i; 
        if(vet[aux] > vet[j])
        aux=j;
        temp = vet[aux];
        vet[aux]=vet[i];
        vet[i]=temp;
    }
}
