#include <iostream>

using namespace std;

void linha(char c, int n);
int main()
{
    cout << "ESTÁCIO" << endl;
    linha ('=', 7);
    cout << "Estrutura de dados" << endl;
    linha ('*', 9);
    cout << "VITOR" << endl;
    linha ('-', 5);
    cout << endl;
    system("pause");
    return 0;
}
//Função que receba valores correspondentes ao caracter e a quantidade de vezes que se deseja exibi-lo.
void linha(char c, int n) {
    for(int x=1; x <= n; x++);
    cout << c;
}
