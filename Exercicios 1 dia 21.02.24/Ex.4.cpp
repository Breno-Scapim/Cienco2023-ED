#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double salario, novoSalario;

    cout << "Digite o sal�rio atual do funcion�rio: ";
    cin >> salario;

    if (salario < 1000) {
        novoSalario = salario * 1.15;
    } else if (salario >= 1000 && salario <= 1500) {
        novoSalario = salario * 1.10;
    } else {
        novoSalario = salario * 1.05;
    }

    cout << "O novo sal�rio do funcion�rio �: R$ " << novoSalario << endl;

    return 0;
}
