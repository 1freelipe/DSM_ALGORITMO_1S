#include <iostream>

using namespace std;

void somaLinhas(int matriz[][2]);


int main()
{
    int matriz[2][2];

    cout << "Insira o conteudo de uma matriz 2x2: " << endl;
    for(int l=0; l < 2; l++){
        for(int c=0; c < 2; c++){
            cin >> matriz[l][c];
        }
    }

    somaLinhas(matriz);

    cout << "Veja a soma da linha 1 e linha 2 da primeira coluna, apresentada na linha 2: " << endl;
    for(int l=0; l < 2; l++){
        for(int c=0; c < 2; c++){
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }

    return 0;
}

void somaLinhas(int matriz[][2]){
    const int maximoColunas = 100;
    int soma = 0;
    for(int l=0; l < 2; l++){
        for(int c=0; c < 2; c++){
            soma = matriz[0][0] + matriz[1][0];
        }
        matriz[1][0] = soma;
    }
}
