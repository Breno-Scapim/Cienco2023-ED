#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
   double preco_etiqueta, valor_pago;
    int codigo_pagamento;

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite o preço de etiqueta do produto: R$ ";
    cin >> preco_etiqueta;

    cout << "Digite o código da condição de pagamento (1 para à vista dinheiro ou cheque, 2 para à vista com cartão de crédito, 3 para em 2 vezes, 4 para em 3 vezes): ";
    cin >> codigo_pagamento;

    switch (codigo_pagamento) {
        case 1:
            valor_pago = preco_etiqueta * 0.9;
            break;
        case 2:
            valor_pago = preco_etiqueta * 0.95;
            break;
        case 3:
            valor_pago = preco_etiqueta;
            break;
        case 4:
            valor_pago = preco_etiqueta * 1.10;
            break;
        default:
            cout << "Código de condição de pagamento inválido." << endl;
            return 1;
    }

    cout << fixed << setprecision(2);
    cout << "O valor a ser pago é: R$ " << valor_pago << endl;

    return 0;
}
