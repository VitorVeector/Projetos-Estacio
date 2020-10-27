#include <iostream>

using namespace std;

struct cad{
    int matricula;
    float CR;
};

void exibe(cad AL);
int main()
{
    cad aluno;
    cout << "Digite a matricula do aluno: " << endl;
    cin >> aluno.matricula;
    cout << "Digite o CR do aluno: " << endl;
    cin >> aluno.CR;

    return 0;
}
 void exibe (cad AL){
    system("cls");
    cout << "Matricula do aluno: " << AL.matricula << "CR: " << AL.CR << endl;
    system("pause");
}
