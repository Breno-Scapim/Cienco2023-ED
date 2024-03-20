#include <iostream>

int main() {
    const int tamanho = 5;
    int array[tamanho];
    int soma = 0;

    std::cout << "Digite 5 valores inteiros:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Valor " << i + 1 << ": ";
        std::cin >> *(array + i);
        soma += *(array + i);
    }

    // Calculando a média usando ponteiros
    double media = static_cast<double>(soma) / tamanho;

    std::cout << "A média dos valores é: " << media << std::endl;

    return 0;
}
