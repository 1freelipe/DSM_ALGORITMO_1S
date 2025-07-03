#include <iostream>

using namespace std;

int main()
{
    int N, soma=0;

    cout << "Insira o tamanho dos vetores: ";
    cin >> N;

    int vetorA[N], vetorB[N], somaVetores[N], subVetores[N], escalarVetores;

    cout << "Preencha o primeiro vetor: " << endl;
    for(int i=0; i < N; i++){
        cin >> vetorA[i];
    }
    cout << "Preencha o segundo vetor: " << endl;
    for(int i=0; i < N; i++){
        cin >> vetorB[i];
    }

    cout << "Vetor A: ";
    for(int i=0; i < N; i++){
        cout << vetorA[i] << " ";
    }

    cout << endl;

    cout << "Vetor B: ";
    for(int i=0; i < N; i++){
        cout << vetorB[i] << " ";
    }

    for(int i=0; i < N; i++){
        soma += vetorA[i];
    }

    cout << "\n" << "A soma dos elementos de A é: "<< soma;

    soma = 0;
    for(int i=0; i < N; i++){
        soma += vetorB[i];
    }

    cout << "\n" << "A soma dos elementos de B é: "<< soma;

    for(int i=0; i < N; i++){
        somaVetores[i] = vetorA[i] + vetorB[i];
    }

    cout << endl;

    cout << "Vetor C: ";
    for(int i=0; i < N; i++){
        cout << somaVetores[i] << " ";
    }

    for(int i=0; i < N; i++){
        subVetores[i] = vetorB[i] - vetorA[i];
    }

    cout << endl;

    cout << "Vetor D: ";
    for(int i=0; i < N; i++){
        cout << subVetores[i] << " ";
    }

    for(int i=0; i < N; i++){
        escalarVetores = (vetorA[i] * vetorB[i]) + (vetorA[i] * vetorB[i]);
    }

    cout << endl;

    cout << "Produto escalar: " << escalarVetores;

    return 0;
}
