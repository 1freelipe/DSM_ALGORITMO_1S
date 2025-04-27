#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    string nome;
    int op, idade;
    float salario, soma_salario;


do {
    cout << "Bem vindo ao menu." << endl;
    cout << "*****************************" << endl;
    cout << "* 1 - Cadastrar funcionário.*" << endl;
    cout << "* 2 - Calcular o salário.   *" << endl;
    cout << "* 3 - Mostrar dados.        *" << endl;
    cout << "* 0 - Sair.                 *" << endl;
    cout << "*****************************" << endl;
    cin >> op;

    if (op == 1){
        cout << "Digite o nome do funcionário: " << endl;
        cin >> nome;
        cout << "Agora digite a idade do funcionário: " << endl;
        cin >> idade;
        cout << "Agora digite o salário bruto do funcionário: " << endl;
        cin >> salario;
        if (salario <= 1518){
            cout << "O percentual de desconto do INSS é de: 7.5%" << endl;
        } else if (salario >= 1519 & salario <= 2793){
            cout << "O percentual de desconto do INSS é de: 9%" << endl;
        } else if (salario >= 2794 & salario <= 4190){
            cout << "O percentual de desconto do INSS é de: 12%" << endl;
        } else if (salario >= 4191 & salario <= 8157){
            cout << "O percentual de desconto do INSS é de: 14%" << endl;
        }
    } else if (op == 2 & salario <= 1518){
        soma_salario = salario - (salario * 0.075);
        cout << "O seu salário líquido é de: " << soma_salario << endl;
    } else if (op == 2 & salario >= 1519 & salario <= 2793){
        soma_salario = salario - (salario * 0.09);
        cout << "O seu salário líquido é de: " << soma_salario << endl;
    } else if (op == 2 & salario >= 2794 & salario <= 4190){
        soma_salario = salario - (salario * 0.12);
        cout << "O seu salário líquido é de: " << soma_salario << endl;
    } else if (op == 2 & salario >= 4191 & salario <= 8157){
        soma_salario = salario - (salario * 0.14);
        cout << "O seu salário líquido é de: " << soma_salario << endl;
    } else if (op == 3){
        cout << "O nome do funcinário cadastrado é: " << nome << endl;
        cout << "Sua idade é de: " << idade << endl;
        cout << "Salario bruto: R$ " << salario << endl;
        cout << "Salário líquido: R$" << soma_salario << endl;
    } else if (op != 1 & op != 2 & op != 3 & op != 0){
        cout << "Opção inválida, tente novamente." << endl;
    }


}while (op != 0);




    return 0;
}
