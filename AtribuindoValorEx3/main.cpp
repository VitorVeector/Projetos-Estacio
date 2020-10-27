#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	struct prod{
	    char nomeProd[21];
	    float valor;
	}produto1, produto2, aux;
	cout << "Informe o primeiro produto: " << endl;
	cin.getline(produto1.nomeProd, 21);
	cout << "Qual o valor: " << endl;
	cin>>produto1.valor;
	cin.get(); //retira o enter
	cout << "Informe o segundo produto: " << endl;
	cin.getline(produto2.nomeProd, 21);
	cout << "Qual o valor: " << endl;
	cin>>produto2.valor;
	cin.get(); //retira o enter
	if(strcmp(produto1.nomeProd,produto2.nomeProd)>0);
    ( aux= produto1 ; produto1 = produto2; produto2 = aux;)
    cout << "Nome do primeiro produto: " << produto1.nomeProd << "De R$" << produto1.valor << endl;
    cout << "Nome do segundo produto: " << produto2.nomeProd << "De R$" << produto2.valor << endl;


		system("pause");
		return 0;

}
