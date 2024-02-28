#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{
     const int num_alunos = 10;
    int num_aluno, num_aluno_mais_alto, num_aluno_mais_baixo;
    double altura, altura_mais_alta = INT_MIN, altura_mais_baixa = INT_MAX;

    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < num_alunos; ++i) {
        cout << "Informe o n�mero do aluno " << i + 1 << ": ";
        cin >> num_aluno;

        cout << "Informe a altura do aluno " << num_aluno << " em cent�metros: ";
        cin >> altura;

        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            num_aluno_mais_alto = num_aluno;
        }

        if (altura < altura_mais_baixa) {
            altura_mais_baixa = altura;
            num_aluno_mais_baixo = num_aluno;
        }
    }

    cout << "O aluno mais alto � o n�mero " << num_aluno_mais_alto << " com " << fixed << setprecision(2) << altura_mais_alta << " cent�metros." << endl;

    cout << "O aluno mais baixo � o n�mero " << num_aluno_mais_baixo << " com " << fixed << setprecision(2) << altura_mais_baixa << " cent�metros." << endl;

    return 0;
}
