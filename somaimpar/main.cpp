#include <iostream>

using namespace std;

int main()
{
    int a, b, somaImpar=0;

    cin >> a >> b;

    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    for(int i=a + 1; i < b; i++){
        if(i % 2 != 0){
            somaImpar += i;
        }
    }

    cout << somaImpar;

    return 0;
}
