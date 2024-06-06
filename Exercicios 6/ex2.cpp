#include <iostream>
#include <stack>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    stack <int> pilha;
    int n, elemento;
    do{
        cout << endl << "Escolha uma opção abaixo: \n"
            "1 - Inserir elemento(número inteiro)\n"
            "2 - Remover elemento do topo \n"
            "3 - Verificar elemento do topo \n"
            "4 - Verificar se a pilha está vazia \n"
            "5 - Exibir tamanho da pilha \n"
            "0 - Sair \n"
            "Opção: ";
        cin >> n;

        switch(n){
        case 1:
            cout << "Digite o elemento a ser inserido: " << endl;
            cin >> elemento;
            pilha.push(elemento);
            cout << "Elemento adicionado: " << pilha.top() << endl;
            break;
        case 2:
            cout << "Elemento a ser removido: " << pilha.top() << endl;
            pilha.pop();
            cout << endl << "Elemento removido" << endl;
            break;
        case 3:
            cout << "Elemento no Topo: " << pilha.top() << endl;
            break;
        case 4:
            if(pilha.empty()){
               cout << "A pilha está vazia" << endl;
            }else{
                cout << "A pilha não está vazia" << endl;
            }
            break;
        case 5:
            cout << "O tamanha da pilha é: " << pilha.size() << endl;
            break;
        case 0:
            cout << "Encerrando o programa." << endl;
            break;
        default:
            cout << "Opção inválida" << endl;
            break;
        }

    }while(n != 0);
}
