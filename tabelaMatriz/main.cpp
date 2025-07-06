#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    string palestras[4][4] = {
        {"1", "Linux", "Auditorio 1", "8h às 9h"},
        {"2", "Recuperação de Desastres", "Auditorio 2", "9h às 10h"},
        {"3", "Windows Server", "Auditorio 3", "13h às 14h"},
        {"4", "Lógica e Programação", "Auditorio Principal", "15h às 17h"}};

    int codigo;

    cout << "Digite o código da palestra: \n";
    cin >> codigo;

    if(codigo == 1){
        for(int l=0; l < 1; l++){
            for(int c=1; c < 4; c++){
                cout << palestras[0][c] << " ";
            }
        }
    }else if(codigo == 2){
        for(int l=0; l < 1; l++){
            for(int c=1; c < 4; c++){
                cout << palestras[1][c] << " ";
            }
        }
    }else if(codigo == 3){
        for(int l=0; l < 1; l++){
            for(int c=1; c < 4; c++){
                cout << palestras[2][c] << " ";
            }
        }
    }else if(codigo == 4){
        for(int l=0; l < 1; l++){
            for(int c=1; c < 4; c++){
                cout << palestras[3][c] << " ";
            }
        }
    }

    return 0;
}
