#include <iostream>
#include <locale>

using namespace std;
#define DIAS 365
int main()
{
    float tempo[DIAS];
    float soma = 0;
    float menor , maior, media;
    int abaixo = 0;

    cout << "Digite temperatura média de cada dia do ano:" << endl;
    for (int i = 0; i < DIAS; ++i) {
        cout << "Dia " << i + 1 << ": ";
        cin >> tempo[i];
        soma += tempo[i];

        if (i == 0 || tempo[i] < menor) {
            menor = tempo[i];
        }

        if (i == 0 || tempo[i] > maior) {
            maior = tempo[i];
        }
    }

    media = soma / DIAS;

    for (int i = 0; i < DIAS; ++i) {
        if (tempo[i] < media) {
            abaixo++;
        }
    }

    cout << "Menor temperatura do ano: " << menor << " oC" << endl;
    cout << "Maior temperatura do ano: " << maior << " oC" << endl;
    cout << "Temperatura media anual: " << media << " oC" << endl;
    cout << "Numero de dias no ano em que a temperatura foi inferior a media: " << abaixo << endl;
}
