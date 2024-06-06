#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

void imprimeLista(list<string> lista)
{
	list<string>::const_iterator valores;
	if (lista.empty())
	{
		cout << "Lista vazia.";
	}
	else {
		valores = lista.begin();
        do{
            cout << *valores << " ";
			valores++;
		}
		while (valores != lista.end());
	}
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    string nome;
    list<string> lista;
    cout << "Quantos funcionários serão cadastrados?: ";
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++)
    {
        cout << "Digite o nome do " << i << "º funcionário: ";
        getline(cin, nome);
        lista.push_back(nome);
    }

    imprimeLista(lista);
    cout << endl;
    list<string> aux = lista;
    aux.reverse();
    imprimeLista(aux);
    cout << endl;
    imprimeLista(lista);
    cout << endl;

    cout << "Estão cadastrados " << lista.size() << " funcionários.";
}
