#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int totalc, totalp, 4
    tcoelhos, tpatos;

    cout << "Digite o total de cabeças: " << endl;
    cin >> totalc;

    cout << "Agora digite o total de pés: " << endl;
    cin >> totalp;

    tcoelhos = (totalp - (2 * totalc)) / 2;
    tpatos = totalc - tcoelhos;

    cout << "Existem: " << tcoelhos << " coelho(s) no cercado" << endl;
    cout << "E: " << tpatos << " pato(s) no cercado" << endl;



    return 0;
}
