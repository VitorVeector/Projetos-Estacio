#include <iostream>

using namespace std;

int main ()
{
    int L, op, matProcura, pos, achou, matric[]={2,4,5,6,13};
    float CR[]={6.7, 8.3, 3.7, 8.9, 9};

    do
    {
       system("cls");
       cout << "1 - LISTA" << endl;
       cout << "2 - PROCURA" << endl;
       cout << "3 - SAIR" << endl;
       cout << "OPCAO: " << endl;
       cin >> op;
       switch (op)
       {
            case 1: cout << "MATRICULAS: " << endl;
            for (L = 0; L < 5; L++)
           {
               cout << L+1 << " - " << matric[L] << endl;
               //break;
           }
            case 2: cout << "QUAL MATRICULA DEVE SER PROCURADA? " << endl;
            cin >> matProcura;
            achou = 0;
            for (L = 0; L < 5 && achou == 0; L++)
            {
                if(matProcura == matric[L])
                {
                    achou = 1; pos = L;
                }
            }
            if (achou == 1)
                cout << "CR: " << CR[pos] << endl;
            else 
                cout << "MATRICULA NÃO ACHADA!" << endl;
            break;
            case 3: cout << "***FIM DA EXECUCAO***" << endl;
            break;
            default: cout << "***OPCAO INVALIDA***" << endl;
            
       }
       cout << endl;
    } while (op!=3);
    


    return 0;
}