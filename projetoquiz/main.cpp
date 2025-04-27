#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    string nome, resposta;
    int pontos, erros = 0, soma = 0;


    cout << "Olá jogador, qual é o seu nome? \n";
    getline(cin,nome);

    cout << "Olá, " << nome << "! Bem vindo ao quiz de Breaking Bad! \n";

    cout << "Primeira Pergunta: ";
    cout << "Onde se passa a série de Breaking Bad? \n";
    cout << "(a) Arizona \n";
    cout << "(b) Novo México \n";
    cout << "(c) Flórida \n";
    cout << "(d) México \n";
    cout << "(e) Camboja \n";
    cin >> resposta;
        if (resposta == "b") {
            cout << "Resposta correta! \n";
            pontos = 1;
        } else {
            cout << "Incorreto! \n";
            erros = 1;
        }
    cout << "Segunda Pergunta: " << endl;
    cout << "Qual o nome do personagem principal? \n";
    cout << "(a) Walter White \n";
    cout << "(b) Jesse Pinkman \n";
    cout << "(c) Saul Goodman \n";
    cout << "(d) Skyler White \n";
    cout << "(e) Hank Schrader \n";
    cin >> resposta;
        if (resposta == "a") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Resposta incorreta! \n";
            erros = erros + 1;
        }
    cout << "Terceira pergunta: " << endl;
    cout << "Qual o primeiro pseudônimo de Jesse Pinkman \n";
    cout << "(a) A Baleia \n";
    cout << "(b) O Juíz \n";
    cout << "(c) Heisenberg \n";
    cout << "(d) Capitão cozinha \n";
    cout << "(e) Pinkman \n";
    cin >> resposta;
        if (resposta == "d") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
            }
    cout << "Quarta pergunta: " << endl;
    cout << "Quem matou Gustavo Fring? \n";
    cout << "(a) Jesse Pinkman \n";
    cout << "(b) Gale \n";
    cout << "(c) Mike Ermanthraut \n";
    cout << "(d) Walter White \n";
    cout << "(e) Nenhuma das alternativas \n";
    cin >> resposta;
        if (resposta == "d") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
        }
    cout << "Quinta pergunta: " << endl;
    cout << "Quantas temporadas tem a série? \n";
    cout << "(a) 3 Temporadas \n";
    cout << "(b) 5 Temporadas \n";
    cout << "(c) 7 Temporadas \n";
    cout << "(d) 2 Temporadas \n";
    cout << "(e) Apenas 1 temporada \n";
    cin >> resposta;
        if (resposta == "b") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
        }
    cout << "Sexta Pergunta: " << endl;
    cout << "Quem era o dono do lava jato antes de Walter White \n";
    cout << "(a) Bogdan Wolynetz \n";
    cout << "(b) Skyler White \n";
    cout << "(c) Jesse Pinkman \n";
    cout << "(d) Gustavo Fring \n";
    cout << "(e) Walter White Junior \n";
    cin >> resposta;
        if (resposta == "a") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
        }
    cout << "Sétima Pergunta: " << endl;
    cout << "Com quem Skyler White trai Walter White? \n";
    cout << "(a) Bogodan Wolynetz \n";
    cout << "(b) Gustavo Fring \n";
    cout << "(c) Ted Beneke \n";
    cout << "(d) Saul Goodman \n";
    cout << "(e) Jesse Pinkman \n";
    cin >> resposta;
        if (resposta == "c") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
        }
    cout << "Oitava Pergunta: " << endl;
    cout << "Como Gustavo Fring Morre? \n";
    cout << "(a) Atropelado \n";
    cout << "(b) Afogado \n";
    cout << "(c) Explodido \n";
    cout << "(d) Com um tiro na cabeça \n";
    cout << "(e) Morto a facadas \n";
    cin >> resposta;
        if (resposta == "c") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
        }
    cout << "Nona Pergunta: " << endl;
    cout << "Qual o nome do traficante que Walter White mata em seu porão? \n";
    cout << "(a) Emílio \n";
    cout << "(b) Tuco Salamanca \n";
    cout << "(c) Hank Schrader \n";
    cout << "(d) Crazy Eight \n";
    cout << "(e) Gustavo Fring \n";
    cin >> resposta;
        if (resposta == "d") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
        }
    cout << "Décima pergunta: " << endl;
    cout << "Qual a causa da morte de Jane, a primeira namorada de Jesse? \n";
    cout << "(a) Overdose \n";
    cout << "(b) Assasinada por Tuco Salamanca \n";
    cout << "(c) Morta em um tiroteio \n";
    cout << "(d) Morta em um acidente aéreo \n";
    cout << "(e) Ela comete suícidio \n";
    cin >> resposta;
        if (resposta == "a") {
            cout << "Resposta correta! \n";
            pontos = pontos + 1;
        } else {
            cout << "Incorreta! \n";
            erros = erros + 1;
        }
    cout << "Seus acertos são: " << pontos << endl;
    cout << "Seus erros são: " << erros << endl;
    soma = pontos * 10;
    cout << "Sua porcentagem de acertos: " << soma << "%";





    return 0;
}
