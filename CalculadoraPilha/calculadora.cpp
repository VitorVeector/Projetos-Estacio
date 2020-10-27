#include <iostream>
#include <locale.h> //selolocale
#include <stdlib.h> //System
#include <string> //Textos em geral
#include <cstdlib> 

#define TAM 100

using namespace std;

void push (float p[], int& t, float v);
float pop (float p[], int& t);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int t = -1; //Inicialização
    float a, b, p[TAM];
    char s[10];

    system("color f1");
    cout << "*******************************************" << endl;
    cout << "Calculadora para quatro operações pós-fixa *" << endl;
    cout << "Digite numeros e depois os operadores *" << endl;
    cout << "Digite S para sair *" << endl;
    cout << "*******************************************" << endl;
    do
    {
        cout << ": ";
        cin >> s;

        switch (s[0])
        {
        case '+':
            a = pop(p, t);
            b = pop(p, t);

            cout << endl;
            cout << a + b << endl;

            push(p, t, a + b);
            break;

        case '-':
            a = pop(p, t);
            b = pop(p, t);

            cout << endl;
            cout << a - b << endl;

            push(p, t, a - b);
            break;

         case '*':
            a = pop(p, t);
            b = pop(p, t);

            cout << endl;
            cout << a * b << endl;

            push(p, t, a * b);
            break;

        case '/':
            a = pop(p, t);
            b = pop(p, t);

            if (a==0)
                cout << "Operação inválida!, não é possível dividir por 0." << endl;
                else
            {
            cout << endl;
            cout << a / b << endl;

            push(p, t, a / b);
            }
            break;




        default:
            push (p, t, atof(s));
        }
    } while (s[0] != 's');
    system("pause");
}