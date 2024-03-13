#include <iostream>
#include <locale>

using namespace std;

#define tam 20
int main() {
    int vet[tam];

    cout << "Digite 20 numeros:" << endl;
    for (int i = 0; i < tam; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vet[i];
    }
    cout << "O vetor invertido fica: \n";
    for (int i = tam - 1; i >= 0; --i) {
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}
