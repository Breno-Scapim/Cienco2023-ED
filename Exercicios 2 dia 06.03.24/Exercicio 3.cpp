#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int vetA[10], vetM[10], x;

    cout << "Digite 10 numeros: \n";
    for(int i = 0; i < 10; i++)
    {
        cout << "Numero " << i + 1 << "\n";
        cin >> vetA[i];
    }

    cout << "Digite numero que deseja multiplicar: \n";
    cin >> x;

    for(int i = 0; i < 10; i++)
    {
        vetM[i] = vetA[i] * x;
    }

    cout << "Os valores das multiplicacoes sao: \n";
    for(int i = 0 ; i < 10; i++)
    {
        cout << vetM[i] << " ";
    }

}
