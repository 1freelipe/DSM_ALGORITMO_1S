#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    float media[10], calculo;

    media;

    cout << "Digite a media de cada aluno: " << endl;
    for(int i=0; i < 10; i++){
        cin >> media[i];
    }

    for(int i=0; i < 10; i++){
        cout << i + 1 << "º" << " Aluno:" << " nota " << media[i] << " - ";
        if(media[i] > 7){
            cout << "Aprovado" << endl;
        } else if(media[i] >= 5 && media[i] < 7){
            cout << "Aluno em recuperação" << endl;
        } else if(media[i] < 5){
            cout << "Aluno reprovado" << endl;
        }

    }

    return 0;
}

