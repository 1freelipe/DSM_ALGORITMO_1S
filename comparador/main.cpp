#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, n3, contador;

    cout << "Digite o primeiro n�mero: " << endl;
    cin >> n1;
    cout << "Digite o segundo n�mero: " << endl;
    cin >> n2;
    cout << "Digite o terceiro n�mero: " << endl;
    cin >> n3;

    if (n1 == n2 || n1 == n3) {
        contador = contador + 1;
    }
    if (n2 == n3 || n2 == n1) {
        contador = contador + 1;
    }

    if (n3 == n1 || n3 == n2) {
        contador = contador + 1;
    }

    cout << contador << " n�meros s�o iguais.";



    return 0;
}
