#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, aleat, chances, nivel, creditos, opcao;
    string opc;

creditos = 0;

do{
    cout << "|========================|" << endl;
    cout << "|    JOGO ADVINHACAO     |" << endl;
    cout << "|========================|" << endl;
    cout << "| 1 - Inserir Créditos   |" << endl;
    cout << "| 2 - Consultar Créditos |" << endl;
    cout << "| 3 - Jogar              |" << endl;
    cout << "| 4 - Sair               |" << endl;
    cout << "|========================|" << endl;
    cin >> opcao;

    if(opcao == 3 && creditos == 0){
        cout << "Você não possui créditos para jogar, insira primeiro." << endl;
    }

    if(opcao == 1){
        cout << "Insira seus créditos: " << endl;
        cin >> creditos;
        cout << creditos << " crédito(s) inseridos" << endl;
    } else if(opcao == 2){
        cout << "Você possui: " << creditos << " créditos" << endl;
    } else if(opcao == 3 && creditos > 0){
        cout << "Selecione o nível em que deseja jogar, cada nível possui chances diferentes: " << endl;
        cout << "1 - Fácil - 10 Chances" << endl;
        cout << "2 - Normal - 5 Chances" << endl;
        cout << "3 - Difícil - 3 Chances" << endl;
        cout << "0 - Sair" << endl;
        cin >> nivel;

        unsigned seed = time(0);
        srand(seed);
        num = 1+rand()%10;

        if(nivel == 1){
            chances = 10;
            cout << "Você escolheu o nível 1" << endl;
            while(aleat != num && chances > 0){
            cout << "Chances restantes: " << chances << endl;
            cout << "Tente adivinhar o número aleatório, ele está entre 1 e 10: " << endl;
            cin >> aleat;

            if(aleat < num){
                cout << "Seu chute foi muito baixo" << endl;
                chances--;
            }  else if(aleat > num){
                cout << "Seu chute foi muito alto" << endl;
                chances--;
            }
        }
    }
        if(nivel == 2){
            cout << "Você escolheu o nível 2" << endl;
            chances = 5;
            while(aleat != num && chances > 0){
            cout << "Tente adivinhar o número aleatório, ele está entre 1 e 10: " << endl;
            cout << "Chances restantes: " << chances << endl;
            cout << "Crédito(s) restantes: " << creditos << endl;
            cin >> aleat;

            if(aleat < num){
                cout << "Seu chute foi muito baixo" << endl;
                chances--;
            }  else if(aleat > num){
                cout << "Seu chute foi muito alto" << endl;
                chances--;
            }
            }
        }
        if(nivel == 3){
            cout << "Você escolheu o nível 3" << endl;
            chances = 3;
            while(aleat != num && chances > 0){
            cout << "Tente adivinhar o número aleatório, ele está entre 1 e 10: " << endl;
            cout << "Chances restantes: " << chances << endl;
            cout << "Crédito(s) restantes: " << creditos << endl;
            cin >> aleat;

            if(aleat < num){
                cout << "Seu chute foi muito baixo" << endl;
                chances--;
            }  else if(aleat > num){
                cout << "Seu chute foi muito alto" << endl;
                chances--;
            }
            }
        }

        if(aleat == num){
            cout << "Parabéns, você venceu!!" << endl;
            cout << "Você ganhou mais um crédito por ter acertado!!" << endl;
            creditos++;
        } else if(chances == 0){
            cout << "Você perdeu, mais sorte na próxima" << endl;
            cout << "O número era: " << num << endl;
            creditos--;
        }

        cout << "Creditos restantes: " << creditos << endl;

        cout << "Deseja jogar novamente? ";
        cin >> opc;
        system("cls");
}

    if(creditos == 0){
        cout << "Seus créditos acabaram." << endl;
    }

}while(opcao != 4);

    system("pause");

    return 0;
}
