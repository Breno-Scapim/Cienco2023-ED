#include <iostream>

void imprimirNormal(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << *(vetor + i) << " ";
    }
    std::cout << std::endl;
}

void imprimirInverso(int* vetor, int tamanho) {
    for (int i = tamanho - 1; i >= 0; --i) {
        std::cout << *(vetor + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    std::cout << "Digite 10 valores inteiros:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Valor " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    std::cout << "Conteúdo do vetor na ordem normal:" << std::endl;
    imprimirNormal(vetor, tamanho);

    std::cout << "Conteúdo do vetor na ordem inversa:" << std::endl;
    imprimirInverso(vetor, tamanho);

    return 0;
}
