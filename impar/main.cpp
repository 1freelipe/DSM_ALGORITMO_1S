#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    cout << "Estes s�o os n�meros impares de 1 � 100: " << endl;
    for(int i=1; i<=100; i++){
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }




    return 0;
}
