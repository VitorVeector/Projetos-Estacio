#include <iostream>

using namespace std;

int main()
{
    struct Cad{
        char pal[21];
    };
    Cad palavra[2];
    int x, y;
    for (x=0; x<=1; x++)
    {
        cout << "Palavra: " << endl;
        cin.getline(palavra[x].pal, 21);


    }
    palavra[0].pal[0]=toupper(palavra[0].pal[0]);
    system("cls");
    for(x=0; x<2; x++)
    {
        for(y=0; palavra[x].pal[y] != '\0';y++)
            cout << endl << palavra[x].pal[y];
        cout << endl;
    }
    return 0;
}
