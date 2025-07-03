#include <iostream>

using namespace std;

int main()
{
    int linha, coluna;

    cout << "Insira a quantidade de linhas e em seguida a quantidade de colunas que a matriz vai ter: ";
    cin >> linha >> coluna;

    cout << "Uma matriz de " << linha << " linhas e " << coluna << " colunas" << endl;
    int matriz[linha][coluna];

    cout << "Agora insira os números na matriz e vamos ver a transposta dela: " << endl;
    for(int l=0; l < linha; l++){
        for(int c=0; c < coluna; c++){
            cin >> matriz[l][c];
        }
    }

    cout << "Matriz original: " << endl;
    for(int l=0; l < linha; l++){
        for(int c=0; c < coluna; c++){
            cout << matriz[l][c] << "|";
        }
        cout << endl;
    }

    cout << "Matriz transposta: " << endl;
    for(int c=0; c < coluna; c++){
        for(int l=0; l < linha; l++){
            cout << matriz[l][c] << "|";
        }
        cout << endl;
    }

    return 0;
}

