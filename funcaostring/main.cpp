#include <iostream>
#include <string>

using namespace std;

int caracter(string nome, char letra);
string letraContida(string nome, char letra);


int main()
{

    string nome;
    char letra;

    cout << "Digite seu nome: " << endl;
    cin >> nome;

    cout << "Agora digite uma letra que contenha no nome para sabermos a posi��o dela: ";
    cin >> letra;

    if(!caracter(nome, letra)){
        cout << "Letra n�o encontrada";
    }else {
        cout << "Letra '" << letraContida(nome, letra) << "' encontrada na posi��o: " << caracter(nome, letra);
    }


    return 0;
}

string letraContida(string nome, char letra){
    for(int i=0; i < nome.size(); i++){
        if(nome[i] == letra){
            return string(1, letra);
        }
    }

    return "Letra n�o encontrada";
}

int caracter(string nome, char letra){
    int tamanhoString = nome.size();
    int posicao = 0;

    for(int i=0; i < tamanhoString; i++){
        if(nome[i] == letra){
            return i;
        }
    }

    return false;
}
