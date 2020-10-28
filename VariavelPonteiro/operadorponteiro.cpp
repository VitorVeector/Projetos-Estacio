#include <iostream>

using namespace std;

int main()
{   
    int numero = 10, *ptr=&numero ; //Operação simples para ponteiro
    

    cout << "Valor do que esta dentro do int: " << *ptr << endl;
    cout << "Endereco do int: " << &ptr << endl;

    system("pause");
}