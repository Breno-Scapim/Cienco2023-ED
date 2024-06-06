#include <iostream>

using namespace std;

void imprimeVetor(int x[]);
void bubbleSort3(int x[]);

int main()
{
    int x[5];

    for(int i = 0; i < 5; i++){
        cout << "Digite o numero: ";
        cin >> x[i];
    }

    imprimeVetor(x);
    cout << endl;

    bubbleSort3(x);

    imprimeVetor(x);

}

void imprimeVetor(int x[])
{
    for(int i = 0; i < 5; i++)
    {
        cout << " |" << x[i] << "|  ";
    }
}

void bubbleSort3(int x[])
{
    bool troca = 1;
    int vezes = 0;
    int aux = 0;

    do{
        for(int j = 1; j <= 4; j++){
        for(int i = 4; i >= j; i--){
            if(x[i] > x[i - 1]){
                aux = x[i];
                x[i] = x[i - 1];
                x[i - 1] = aux;
            }else{troca = 0;}
        }
    }

    }while(troca);
}
