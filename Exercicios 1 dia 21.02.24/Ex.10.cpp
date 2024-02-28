#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
     int idade, opiniao, total_pessoas = 0;
    int otimo = 0, bom = 0, regular = 0, ruim = 0;
    int soma_idades = 0;

     setlocale(LC_ALL, "Portuguese");

    cout << "Digite a idade (ou um valor negativo para encerrar): ";
    cin >> idade;

    while (idade >= 0) {
        cout << "Digite a opinião em relação ao filme (1 - ótimo, 2 - bom, 3 - regular, 4 - ruim): ";
        cin >> opiniao;

        soma_idades += idade;
        total_pessoas++;

        switch(opiniao) {
            case 1:
                otimo++;
                break;
            case 2:
                bom++;
                break;
            case 3:
                regular++;
                break;
            case 4:
                ruim++;
                break;
            default:
                cout << "Opção inválida." << endl;
        }

        cout << "\nDigite a idade (ou um valor negativo para encerrar): ";
        cin >> idade;
    }

double media_idade = total_pessoas > 0 ? static_cast<double>(soma_idades) / total_pessoas : 0;

    double percent_otimo = (static_cast<double>(otimo) / total_pessoas) * 100;
    double percent_bom = (static_cast<double>(bom) / total_pessoas) * 100;
    double percent_regular = (static_cast<double>(regular) / total_pessoas) * 100;
    double percent_ruim = (static_cast<double>(ruim) / total_pessoas) * 100;

    cout << "\n--- Resultados da Pesquisa ---" << endl;
    cout << "A. Quantidade de pessoas que responderam a pesquisa: " << total_pessoas << endl;    cout << "B. Média de idade das pessoas que responderam a pesquisa: " << fixed << setprecision(2) << media_idade << " anos" << endl;
    cout << "C. Porcentagem de cada uma das respostas:" << endl;
    cout << "   Ótimo: " << percent_otimo << "%" << endl;
    cout << "   Bom: " << percent_bom << "%" << endl;
    cout << "   Regular: " << percent_regular << "%" << endl;
    cout << "   Ruim: " << percent_ruim << "%" << endl;

    return 0;
}
