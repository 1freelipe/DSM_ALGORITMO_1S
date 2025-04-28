#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, n3, contador;

    cout << "Digite o primeiro número: " << endl;
    cin >> n1;
    cout << "Digite o segundo número: " << endl;
    cin >> n2;
    cout << "Digite o terceiro número: " << endl;
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

    cout << contador << " números são iguais.";



    return 0;
}
