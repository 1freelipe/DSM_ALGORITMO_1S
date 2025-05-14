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
    cout << "| 1 - Inserir Cr�ditos   |" << endl;
    cout << "| 2 - Consultar Cr�ditos |" << endl;
    cout << "| 3 - Jogar              |" << endl;
    cout << "| 4 - Sair               |" << endl;
    cout << "|========================|" << endl;
    cin >> opcao;

    if(opcao == 3 && creditos == 0){
        cout << "Voc� n�o possui cr�ditos para jogar, insira primeiro." << endl;
    }

    if(opcao == 1){
        cout << "Insira seus cr�ditos: " << endl;
        cin >> creditos;
        cout << creditos << " cr�dito(s) inseridos" << endl;
    } else if(opcao == 2){
        cout << "Voc� possui: " << creditos << " cr�ditos" << endl;
    } else if(opcao == 3 && creditos > 0){
        cout << "Selecione o n�vel em que deseja jogar, cada n�vel possui chances diferentes: " << endl;
        cout << "1 - F�cil - 10 Chances" << endl;
        cout << "2 - Normal - 5 Chances" << endl;
        cout << "3 - Dif�cil - 3 Chances" << endl;
        cout << "0 - Sair" << endl;
        cin >> nivel;

        unsigned seed = time(0);
        srand(seed);
        num = 1+rand()%10;

        if(nivel == 1){
            chances = 10;
            cout << "Voc� escolheu o n�vel 1" << endl;
            while(aleat != num && chances > 0){
            cout << "Chances restantes: " << chances << endl;
            cout << "Tente adivinhar o n�mero aleat�rio, ele est� entre 1 e 10: " << endl;
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
            cout << "Voc� escolheu o n�vel 2" << endl;
            chances = 5;
            while(aleat != num && chances > 0){
            cout << "Tente adivinhar o n�mero aleat�rio, ele est� entre 1 e 10: " << endl;
            cout << "Chances restantes: " << chances << endl;
            cout << "Cr�dito(s) restantes: " << creditos << endl;
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
            cout << "Voc� escolheu o n�vel 3" << endl;
            chances = 3;
            while(aleat != num && chances > 0){
            cout << "Tente adivinhar o n�mero aleat�rio, ele est� entre 1 e 10: " << endl;
            cout << "Chances restantes: " << chances << endl;
            cout << "Cr�dito(s) restantes: " << creditos << endl;
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
            cout << "Parab�ns, voc� venceu!!" << endl;
            cout << "Voc� ganhou mais um cr�dito por ter acertado!!" << endl;
            creditos++;
        } else if(chances == 0){
            cout << "Voc� perdeu, mais sorte na pr�xima" << endl;
            cout << "O n�mero era: " << num << endl;
            creditos--;
        }

        cout << "Creditos restantes: " << creditos << endl;

        cout << "Deseja jogar novamente? ";
        cin >> opc;
        system("cls");
}

    if(creditos == 0){
        cout << "Seus cr�ditos acabaram." << endl;
    }

}while(opcao != 4);

    system("pause");

    return 0;
}
