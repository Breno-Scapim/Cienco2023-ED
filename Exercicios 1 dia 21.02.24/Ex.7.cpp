#include <iostream>
#include <locale>

using namespace std;

int main()
{
     cout << "Números múltiplos de 5 no intervalo de 1 a 500:" << endl;

     setlocale(LC_ALL, "Portuguese");

    for (int i = 1; i <= 500; ++i) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
