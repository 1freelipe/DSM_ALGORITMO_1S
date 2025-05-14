#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    float L1, L2, L3;

    cout << "Digite o primeiro lado: " << endl;
    cin >> L1;
    cout << "Digite o segundo lado: " << endl;
    cin >> L2;
    cout << "Digite o terceiro lado: " << endl;
    cin >> L3;

    if (L1 < L2 + L3 && L2 < L1 + L3 && L3 < L1 + L2 && L1 == L2 && L2 == L3 && L1 == L3) {
        cout << "Este é um triangulo equilatero" << endl;

    } else if (L1 < L2 + L3 && L2 < L1 + L3 && L3 < L1 + L2 && L1 != L2 && L2 != L3 && L1 != L3) {
        cout << "Este é um triangulo escaleno" << endl;

    } else if (L1 < L2 + L3 && L2 < L1 + L3 && L3 < L1 + L2 && L1 == L2 && L2 != L3 || L1 == L3 && L2 != L1 || L2 == L3 && L2 != L1) {
        cout << "Este é um triangulo isosceles" << endl;
    } else {
        cout << "Não forma um triangulo" << endl;
    }
    return 0;
}
