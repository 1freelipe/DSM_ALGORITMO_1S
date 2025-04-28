#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string r;
    int contador;
    int contador1 = 0;

    cout << "Quem foi Ernesto Che Guevara: " << endl;
    cout << "(a) Um médico brasileiro" << endl;
    cout << "(b) Um jogador de cartas argentino" << endl;
    cout << "(c) Um guerrilheiro em Cuba" << endl;
    cout << "(d) Um cantor Colombiano" << endl;
    cin >> r;

    if (r == "c") {
        cout << "Reposta correta" << endl;
        contador++;
    } else if (r != "c") {
        cout << "Resposta incorreta" << endl;
        contador1++;
    }

    cout << endl;

    cout << "Onde Ronaldinho Gaucho, o jogador de futebol nasceu: " << endl;
    cout << "(a) São Paulo" << endl;
    cout << "(b) Rio de Janeiro" << endl;
    cout << "(c) Porto Alegre" << endl;
    cout << "(d) Curitiba" << endl;
    cin >> r;

    if (r == "c"){
        cout << "Resposta correta" << endl;
        contador++;
    }else if (r != "c"){
        cout << "Resposta incorreta" << endl;
        contador1++;

    }

    cout << endl;

    cout << "Quem escreveu 100 anos de solidão: " << endl;
    cout << "(a) Gabriel Garcia Marques" << endl;
    cout << "(b) Raul Pompeu" << endl;
    cout << "(c) Machado de Assis" << endl;
    cout << "(d) Carlos Drummond de Andrade" << endl;
    cin >> r;

    if (r == "a"){
        cout << "Resposta correta" << endl;
        contador++;
    } else if (r != "a"){
        cout << "Resposta incorreta" << endl;
        contador1++;

    }

    cout << contador << " respostas(a) corretas(a)." << endl;
    cout << contador1 << " respostas(a) incorretas(a)." << endl;



    return 0;
}
