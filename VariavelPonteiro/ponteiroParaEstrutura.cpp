#include <iostream>
#include <cstring>

using namespace std;

struct data
{
    int dia, mes, ano;
};

int main()
{   
    data dataNasc, *ptr;
    int d;
    cout << "Digite sua data de nascimento no formato aaaammdd: " << endl;
    cin >> d;
    ptr=&dataNasc;
    ptr->dia=d/10000;
    ptr->mes=(d/100) % 100;
    ptr->ano=d%100;
    cout << "Sua data de nascimento eh: " << ptr->dia<<"/"<<ptr->mes<<"/"<< ptr->ano << endl;



    system("pause");
}