#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main()
{
    string nomes[10];
    string nomeProc;

    cout << "Digite 10 nomes: \n";
    for(int i = 0; i < 10; i++)
    {
        cout << "Digite o " << i+1 << "o nome: \n";
        cin >> nomes[i];
    }
    cout << "Digite o nome que deseja procurar: \n";
    cin >> nomeProc;

    for(int i = 0; i < 10; i++)
    {
    if(nomeProc == nomes[i])
    {
        cout << "Encontrado";
    }
    else
    {
        cout << "Não Encontrado";
    }
    break;
    }
}
