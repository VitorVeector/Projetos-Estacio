#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sexo[2], aux;
    cout << "Digite a inicial do sexo da primeira pessoa: " << endl;
    cin >> sexo[0];
    cout << "Digite a inicial do sexo da segunda pessoa: " << endl;
    cin >> sexo[1];
    cout << "Antes da troca de sexo: " << endl;
    cout << sexo[0] << ", " << sexo [1] << endl;

    if(sexo[0],sexo[1]>0){
        aux = sexo[0];
        sexo[0] = sexo [1];
        sexo[1] = aux;
     }
     cout << "Apos a troca de sexo: " << endl;
     cout << sexo[0] << ", " << sexo [1] << endl;

     system("pause");
    return 0;
}
