#include <iostream>

using namespace std;

int main()
{
    double vet[]=(70.43, 45.50), aux;
    cout << "antes da compara��o/troca: " << endl;
    cout << vet[0] << ", " << vet [1] << endl;
    if(vet[0]>vet[1]){
        aux = vet [0];
        vet[0] = vet [1];
        aux = vet[1];
    }
    cout << "Ap�s a compara��o: " << endl;
    cout << vet[0] << ", " << vet[1] << endl;
    system("pause");
    return 0;
}
