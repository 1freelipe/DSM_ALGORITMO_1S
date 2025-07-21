#include <iostream>
#include <locale>
#include <random>


using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    random_device rd;
    uniform_int_distribution <> dist(1, 60);
    mt19937 gen(rd());
    int tam = 6, mega[tam];

    cout << "Esses são os números da mega sena: ";
    for(int i=0; i < tam; i++){
        mega[i] = dist(gen);
    }

    for(int i=0; i < tam; i++){
        cout << mega[i] << " ";
    }

    return 0;
}
