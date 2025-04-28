#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(LC_ALL, "portuguese");
    int dias, dias_mes, horas_dias;
    float soma, valor_desconto, soma_desconto, aumento, soma_aumento, valor_hora, horas;
    string desconto;

    cout << "Olá, trabalhador! A empresa está oferecendo um aumento de salário aos trabalhadores e, precisamos de algumas informações" << endl;
    cout << "Nos informe quantas horas você trabalha diariamente: " << endl;
    cin >> horas;
    cout << "Quantos dias você trabalha por semana? " << endl;
    cin >> dias;
    horas_dias = horas * dias;
    dias_mes = horas_dias * 4;
    cout << "Você trabalha: " << horas_dias << " horas por semana e, " << dias_mes << " horas por mês" << endl;

     cout << "Digite agora o valor da sua hora trabalhada." << endl;
    cin >> valor_hora;
    cout << "Possui algum desconto?" << endl;
    cin >> desconto;
    if (desconto == "nao"){
        soma = dias_mes * valor_hora;
        cout << fixed << setprecision(2);
        cout << "Salário bruto: R$ " << soma << endl;
        cout << "Descontos: R$ " << valor_desconto << endl;
        cout << "Salário Líquido: R$ " << soma << endl;
    } else if (desconto == "sim") {
        cout << "Quanto é o seu desconto?" << endl;
        cin >> valor_desconto;
        soma = dias_mes * valor_hora;
        soma_desconto = soma - valor_desconto;
        cout << fixed << setprecision(2);
        cout << "Salário bruto: R$ " << soma << endl;
        cout << "Descontos: R$ " << valor_desconto << endl;
        cout << "Salário Líquido: R$ " << soma_desconto << endl;
    }

    if (soma >= 1000) {
        soma_aumento = soma * 0.15f;
        aumento = soma_aumento + soma;
        cout << "Você recebeu um aumento de: R$ " << aumento;
    } else if (soma <= 1000 & desconto == "sim") {
        soma_aumento = soma_desconto * 0.20f;
        aumento = soma_aumento + soma_desconto;
        cout << "Você recebeu um aumento de: R$ " << aumento;
    }






    return 0;
}
