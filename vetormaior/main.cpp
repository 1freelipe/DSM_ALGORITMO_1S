#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int vetor[10]={150, 6, 10, 200, 0, 1890, 9, 8, 10, 11}, maior, menor;

    maior = vetor[0];
    menor = vetor[0];

    for(int i=0; i < sizeof(vetor)/4; i++){
        cout << vetor[i] << " ";
        if (vetor[i] > maior){
            maior = vetor[i];
    }   if (vetor[i] < menor) {
            menor = vetor[i];
    }
}

    cout << "\nO maior valor e: " << maior << endl;
    cout << "O menor valor e: " << menor << endl;



    return 0;
}
