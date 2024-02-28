#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
   for (int i = 1; i <= 20; ++i) {
        int quadrado = i * i;
        cout << "O quadrado de " << i << " é: " << quadrado << endl;
    }

    return 0;
}
