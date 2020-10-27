#include <iostream>

using namespace std;
int x = 0;
void reajuste();
void menu();
void asteriscos();
int main()
{
    reajuste();
    menu();
    asteriscos();
    return 0;
}
void asteriscos(){
    cout << "---FUNÇAO ASTERISCO---" << endl;
    for(int x=1; x<=20; x++)
    cout << "*";
    cout << endl;
    cout <<"------------------------" << endl;
}
void menu(){
    system("cls");
    cout <<"---FUNÇÃO MENU---"<< endl;
    cout <<"MENU"<< endl;
    cout <<"1-Pilha"<<endl;
    cout <<"2-Fila"<<endl;
    cout <<"3-Lista"<<endl;
    cout <<"4-Arvore"<<endl;
    cout <<"5-Grafo"<<endl;
    cout <<"6-Sair"<<endl;
    cout <<"0-opções"<<endl;
    cout <<"------------------------" << endl;

}
void reajuste(){
    float valor, percentual, reajustado;
    cout << "Digite um valor que deverah ser reajustado em R$: " <<endl;
    cin >> valor;
    cout << "Digite o valor percentual do reajuste de 0 ah 100: " << endl;
    cin >> percentual;
    reajustado = valor + valor * percentual/100;
    cout << "Valor reajustado é R$" << reajustado;
}
