#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int n, soma;

    cout << "Indique o tamanho do vetor: \n";
    cin >> n;

    int vetA[n], vetB[n];

    cout << "\nDigite os numeros do vetor A: \n";
    for(int i = 0; i < n; i++)
    {
        cout << "Numero " << i + 1 << "\n";
        cin >> vetA[i];
    }

    cout << "\nDigite os numeros do vetor B: \n";
    for(int i = 0; i < n; i++)
    {
        cout << "Numero " << i + 1 << "\n";
        cin >> vetB[i];
    }

    for(int i = 0; i < n; i++)
    {
        soma = vetA[i] + vetB[i];
        cout << soma << " ";
    }


}
