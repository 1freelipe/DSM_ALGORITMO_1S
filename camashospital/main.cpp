#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[24][4];

    for(int l=0; l < 24; l++){
            cout << "Hora: " << l + 1 << endl;
        for(int c=0; c < 4; c++){
            cout << "Digite as pulsações de cada paciente: " << c + 1 << endl;
            cin >> matriz[l][c];
        }
    }

    cout << "Pulsações de todos os pacientes: " << endl;
    for(int l=0; l < 24; l++){
        for(int c=0; c < 4; c++){
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }

    float soma=0, media=0;
    int maior=0, paciente=0;

    for(int c=0; c < 4; c++){
        soma=0;
        for(int l=0; l < 24; l++){
            soma += matriz[l][c];
        }
        media = soma / 24;
        cout << "Média do paciente: " << c + 1 << ": " << media << endl;
        if(media > maior){
            maior = media;
            paciente = c + 1;
        }
    }

    cout << "O paciente com a maior média é o " << paciente << "º, com média de: " << maior << endl;








    return 0;
}
