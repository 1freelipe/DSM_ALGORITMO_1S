#include <iostream>

bool verificaDimensao(int colunaA, int linhaB);

using namespace std;

int main()
{
    int linhaA=0, colunaA=0, linhaB=0, colunaB=0;

    cout << "Insira as linhas e colunas da matriz A" << endl;
    cin >> linhaA >> colunaA;

    int matrizA[linhaA][colunaA];

    cout << "Agora insira o conteúdo da matriz A: " << endl;
    for(int l=0; l < linhaA; l++){
        for(int c=0; c < colunaA; c++){
            cin >> matrizA[l][c];
        }
    }

    cout << "Insira as linhas e colunas da matriz B" << endl;
    cin >> linhaB >> colunaB;

    for(int l=0; l < linhaA; l++){
        for(int c=0; c < colunaA; c++){
            cout << matrizA[l][c] << " ";
        }
        cout << endl;
    }

    int matrizB[linhaB][colunaB];

    cout << "Agora insira o conteúdo da matriz B: " << endl;
    for(int l=0; l < linhaB; l++){
        for(int c=0; c < colunaB; c++){
            cin >> matrizB[l][c];
        }
    }

    for(int l=0; l < linhaB; l++){
        for(int c=0; c < colunaB; c++){
            cout << matrizB[l][c] << " ";
        }
        cout << endl;
    }

    int matrizC[linhaA][colunaB];

    if(verificaDimensao(linhaA, colunaB)){
        for(int l=0; l < linhaA; l++){
            for(int c=0; c < colunaB; c++){
                matrizC[l][c] = 0;
                for(int k=0; k < colunaA; k++){
                    matrizC[l][c] += matrizA[l][k] * matrizB[k][c];
                }
            }
        }
    }

    if(!verificaDimensao(colunaA, linhaB)){
        cout << "O número de colunas de A deve ser igual ao número de linhas de B";
        return 1;
    }

    cout << "Produto escalar das matrizes e a multiplicação das linhas e colunas: " << endl;
    for(int l=0; l < linhaA; l++){
        for(int c=0; c < colunaB; c++){
            cout << matrizC[l][c] << " ";
        }
        cout << endl;
    }



    return 0;
}

bool verificaDimensao(int linhaA, int colunaB){
    if(linhaA == colunaB)
        return true;
    return false;
}
