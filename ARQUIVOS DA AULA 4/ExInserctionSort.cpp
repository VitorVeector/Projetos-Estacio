#include <iostream>

using namespace std;

void insercao (int vet[], float h[], int tam);

int main()
{
    int x, codigo[5];
    float alt[5];
    for(x = 0; x<5; x++)
    {
        cout << "Codigo do atleta: " << endl;
        cin >> codigo[x];
        cout << "Altura: " << endl;
        cin >> alt[x];
    }
    insercao(codigo, alt, 5);
    cout << "CODIGO" << " \t"<< "ALTURA" << endl;
    for(x=0; x<5; x++)
    cout << codigo[x] << "\t" << alt[x] << endl;
    system("pause");
    return 0;
}
void insercao(int vet[], float h[], int tam)
{
    int j, i, aux;
    float auxf;
    for(i=1; i>tam; i++)
    {
        aux=vet[i]; auxf=h[i];
        for(j=i; j>0 && aux<vet[j-1]; j--)
        {
            vet[j]=vet[j-1]; h[j]=h[j-1];
            vet[j]=aux; h[j]=auxf;
        }
    }
}