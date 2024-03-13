#include <iostream>
#include <locale>

using namespace std;
#define NOTAS 20

float mediaNotas(float vet[], int tam)
{
    float soma = 0;
    for(int i = 0; i < NOTAS; i++)
    {
        soma += vet[i];
    }
    return soma / tam;
}

int main()
{
    float vet[NOTAS], media;
    int acima = 0;

    for(int i = 0; i < NOTAS; i++)
    {
        cout << "Digite a nota " << i+1 << ": \n";
        cin >> vet[i];
    }
    media = mediaNotas(vet, NOTAS);
    cout << "\nA media eh: " << media << "\n";

    for(int i = 0; i < NOTAS; i++)
    {
        if(vet[i] > media)
        {
            acima++;
        }
    }
    cout << "Notas acima da media: " << acima << "\n";
    cout << "Notas abaixo da media: " << NOTAS - acima << "\n";
}
