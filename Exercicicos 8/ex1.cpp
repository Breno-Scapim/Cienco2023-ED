#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimeLista(list<int> lista)
{
	list<int>::const_iterator valores;
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
    list <int> lista;
    int n;
    cout << "Digite 5 números: \n";
    for(int i = 1; i <= 5; i++)
    {
        cout << "Digite número " << i << ": ";
        cin >> n;
        lista.push_back(n);
    }

    imprimeLista(lista);

    cout << endl;

    lista.reverse();

    imprimeLista(lista);
}
