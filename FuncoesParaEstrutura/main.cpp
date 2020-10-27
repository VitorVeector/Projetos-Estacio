#include <iostream>

using namespace std;

struct cad{       //Definição de cad;
    float a, b, c, d;
};

float maior2(float n1, float n2);

int main()
{
    cad numeros=(23, 89 ,13 ,62);               // Declaração/atribuição dos numeros
    cout << "Numeros da estrutura: " << endl;
    cout << numeros.a << ", " << numeros.b << ", " << numeros.c << ", " << numeros.d << "!" << endl;
    cout << "Maior dos quatro: " << endl;
    cout << maior2 (maior2 (numeros.a, numeros.b), maior2(numeros.c, numeros.d));

    system("pause");
    return 0;
}

float maior2(float n1, float n2){
    if(n1>n2) return n1;
    }else{
        return n2;
    }
