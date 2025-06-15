#include <iostream>

using namespace std;

int main()
{
    int vetor[10], vetorDiferente[10], diferentes;

    diferentes = 0;

    for(int i=0; i < 10; i++){
        cin >> vetor[i];
    }

    for(int i=0; i < 10; i++){
        bool ja_existe = false;
        for(int j=0; j < diferentes; j++){
            if(vetor[i] == vetorDiferente[j]){
                ja_existe = true;
                break;
            }
        }
        if(!ja_existe){
            vetorDiferente[diferentes] = vetor[i];
            diferentes++;
        }
    cout << vetor[i] << " ";
    }

    cout << endl;

    cout << "Valores não repetidos: " << endl;
    for(int i=0; i < diferentes; i++){
        cout << vetorDiferente[i] << " ";
    }

    return 0;
}
