#include <iostream>

using namespace std;

struct cad{
    char nome[31];
    int idade;
};

void espacamento();
void idade (int &id)

int main(){
    cad pessoa1;
    cout << "Digite seu nome: " << endl;
    cin.getline(pessoa1.nome, 21);
    cout << "Digite sua idade em 2010: " << endl;
    cin >> pessoa1.idade;
    espacamento();
    cout << "Antes da chamada da funcao: " << endl;
    cout << "Idade de "<< pessoa1.nome << " era de: " << pessoa1.idade << endl;
    idade();
    espacamento();
    cout << "Em 2020 o "<< pessoa1.nome << "tem " << pessoa1.idade << " anos de vida" << endl;


    return 0;
}
void idade (int &id){
    id=id+10
}
void espacamento(){
    cout << "-------------------------" << endl;
}

