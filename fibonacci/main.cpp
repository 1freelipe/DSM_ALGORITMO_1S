#include <iostream>

using namespace std;

int fibonacci(int n);

int main()
{
    int n, t1 = 0, t2 = 1, resultado;

    cout << "Digite um número para ver a sequência de fibonacci " << endl;
    cin >> n;

    for(int i=0; i <= n; i++){
        if(i <= 1){
            resultado = i;
        }else {
            resultado = t1 + t2;
            t1 = t2;
            t2 = resultado;
        }
        cout << resultado << " ";
    }

    cout << endl;

    cout << "Agora utilizando função recursiva: " << endl;
    for(int i=0; i <= n; i++){
        cout << fibonacci(i) << " ";
    }


    return 0;
}

int fibonacci(int n){
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
