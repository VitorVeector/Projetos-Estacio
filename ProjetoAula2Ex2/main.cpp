#include <iostream>

using namespace std;

int descobreIdade(int anoAtual, int anoNasc);
int main()
{
    int anoA, anoN;
    cout << "Em que ano estamos? " << endl;
    cin >> anoA;
    cout << "Em que ano voc� nasceu? " << endl;
    cin >> anoN;
    cout << "Voceh terah ateh 31 de dezembro " << descobreIdade(anoA, anoN) << " anos de idade!" << endl ;
    return 0;
}
//Fun��o que receba valores conrrespondentes ao ano atual e o ano de nascimento de uma pessoa,
// retornando a idade que a pessoa ter� at� 31 de dezembro
int descobreIdade(int anoAtual, int anoNasc){
    return anoAtual -  anoNasc;
}
