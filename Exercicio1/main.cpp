#include <iostream>

using namespace std;

int main()
{
    struct paciente{ //declara��o da estrutura

        char nomePac[31], classificacao[12], tell[14];
        float altura, peso, imc;
    };
    paciente paciente1, paciente2; //Declara��o das variaveis da estrutura
    //Primeiro paciente
    cout << "Informe o nome do primeiro paciente: " << endl;
    cin.getline(paciente1.nomePac, 31);
    cout << "Informe o peso, altura e o IMC: (logo que digitado cada um, precione ENTER) " << endl;
    cin >> paciente1.peso >> paciente1.altura >> paciente1.imc;
    cin.get(); //Retira o enter deixado var�avel n�merica
    cout << "Digite sua classificacao: " << endl;
    cin.getline(paciente1.classificacao, 12);
    cout << "Digite seu numero de contato: " << endl;
    cin.getline(paciente1.tell, 14);

    //Segundo Paciente
    cout << "Informe o nome do segundo paciente: " << endl;
    cin.getline(paciente2.nomePac, 31);
    cout << "Informe o peso, altura e o IMC: (logo que digitado cada um, precione ENTER) " << endl;
    cin >> paciente2.peso >> paciente2.altura >> paciente2.imc;
    cin.get();
    cout << "Digite sua classifica��o: " << endl;
    cin.getline(paciente2.classificacao, 12);
    cout << "Digite seu n�mero de contato: " << endl;
    cin .getline(paciente2.tell, 14);

    //Aprensentando na tela
    cout << "O Nome do primeiro paciente eh: "<< paciente1.nomePac << endl;
    cout << "PESO / ALTURA / IMC" << endl;
    cout << paciente1.peso <<" / " << paciente1.altura << " / " << paciente1.imc << endl;





    return 0;
}
