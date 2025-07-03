#include <iostream>
#include <locale>

using namespace std;

bool valorPerfeito(int soma, int numero, int divisiveis, int vetor[10]);

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero, divisiveis, vetor[10], soma;

    cout << "Digite um n�mero e vamos descobrir se ele � um valor perfeito: " << endl;
    cin >> numero;

    if(valorPerfeito(soma, numero, divisiveis, vetor)){
        cout << "Portanto, o n�mero " << numero << ": � um valor perfeito" << endl;
    }else{
        cout << "O n�mero " << numero << ": n�o � um valor perfeito" << endl;
    }

    return 0;
}

bool valorPerfeito(int soma, int numero, int divisiveis, int vetor[10]){
    soma = 0;
    divisiveis = 0;
    for(int i=1; i < numero; i++){
        if(numero % i == 0){
            vetor[divisiveis] = i;
            divisiveis++;
        }
    }

    for(int i=0; i < divisiveis; i++){
        soma += vetor[i];
    }

    cout << "A soma de todos os seus divisiveis �: " << soma << endl;

    if(soma == numero){
        return true;
    }

    return false;
}
