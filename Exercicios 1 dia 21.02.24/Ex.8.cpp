#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
   int voto, total_votos = 0, votos_candidato1 = 0, votos_candidato2 = 0, votos_nulos = 0, votos_branco = 0;

   setlocale(LC_ALL, "Portuguese");

    cout << "Digite o código do candidato (1, 2), ou 3 para voto nulo, 4 para voto em branco, ou 0 para encerrar: ";
    cin >> voto;

    while (voto != 0) {

        switch (voto) {
            case 1:
                votos_candidato1++;
                break;
            case 2:
                votos_candidato2++;
                break;
            case 3:
                votos_nulos++;
                break;
            case 4:
                votos_branco++;
                break;
            default:
                cout << "Código de voto inválido. Ignorando voto." << endl;
                break;
        }
        total_votos++;

        cout << "Digite o código do candidato (1, 2), ou 3 para voto nulo, 4 para voto em branco, ou 0 para encerrar: ";
        cin >> voto;
    }

    double percentual_candidato1 = (static_cast<double>(votos_candidato1) / total_votos) * 100;
    double percentual_candidato2 = (static_cast<double>(votos_candidato2) / total_votos) * 100;
    double percentual_nulos = (static_cast<double>(votos_nulos) / total_votos) * 100;
    double percentual_branco = (static_cast<double>(votos_branco) / total_votos) * 100;

    cout << fixed << setprecision(2);
    cout << "Percentual de votos para o candidato 1: " << percentual_candidato1 << "%" << endl;
    cout << "Percentual de votos para o candidato 2: " << percentual_candidato2 << "%" << endl;
    cout << "Percentual de votos nulos: " << percentual_nulos << "%" << endl;
    cout << "Percentual de votos em branco: " << percentual_branco << "%" << endl;

    return 0;
}
