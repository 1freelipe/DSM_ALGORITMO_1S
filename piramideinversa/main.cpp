#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n;

    cout << "Digite um n�mero �mpar: " << endl;
    cin >> n;

    if(n % 2 != 0){

    int linhas = (n / 2 ) + 1;

    for(int i=1; i <= linhas; i++){
        for(int j=1; j < i; j++){
                cout << " ";
        }

        for(int k=i; k <= n - (i - 1); k++){
            cout << k << " ";
        }
        cout << endl;
    }
}else {
    cout << "O n�mero precisa ser �mapar" << endl;
}

    return 0;
}
