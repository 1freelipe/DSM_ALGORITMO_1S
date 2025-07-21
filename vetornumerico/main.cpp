#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10], par, impar, pares[10], impares[10];

    par=0;
    impar=0;


    for(int i = 0; i < 10; i++){
        cin >> vetor[i];
        if(vetor[i] % 2 == 0){
            pares[par] = vetor[i];
            par++;
        } else{
            impares[impar] = vetor[i];
            impar++;
        }
    }
    cout << "Valores pares armazenados: ";
    for(int i=0; i < par; i++){
       cout << pares[i] << " ";
    }
    cout << endl;

    cout << "Valores impares armazenados: ";
    for(int i=0; i < impar; i++){
        cout << impares[i] << " ";
    }

    cout << endl;

    cout << "Números pares: " << par << endl;
    cout << "Números impares: " << impar << endl;

    return 0;
}

