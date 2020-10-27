#include <iostream>

using namespace std;

void selecao (int vet[], float h[], int tam);

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
    selecao(codigo, alt, 5);
    cout << "CODIGO" << " \t"<< "ALTURA" << endl;
    for(x=0; x<5; x++)
    cout << codigo[x] << "\t" << alt[x] << endl;
    system("pause");
    return 0;
    
}
void selecao (int vet[], float h[], int tam)
{
    int j, i, aux, temp;
    float temp1;
    for (i=0; i<tam; i++)
    {
        aux = i;
        for(j=i+1; j<tam; j++)
            if(vet[aux] > vet [j])
                aux=j;
        temp = vet[aux];
        vet[aux]=vet[i];
        vet[i]=temp;

        temp1=h[aux];
        h[aux]=h[1];
        h[i]=temp1;
    }
}