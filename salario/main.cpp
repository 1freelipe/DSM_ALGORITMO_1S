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

    cout << "Ol�, trabalhador! A empresa est� oferecendo um aumento de sal�rio aos trabalhadores e, precisamos de algumas informa��es" << endl;
    cout << "Nos informe quantas horas voc� trabalha diariamente: " << endl;
    cin >> horas;
    cout << "Quantos dias voc� trabalha por semana? " << endl;
    cin >> dias;
    horas_dias = horas * dias;
    dias_mes = horas_dias * 4;
    cout << "Voc� trabalha: " << horas_dias << " horas por semana e, " << dias_mes << " horas por m�s" << endl;

     cout << "Digite agora o valor da sua hora trabalhada." << endl;
    cin >> valor_hora;
    cout << "Possui algum desconto?" << endl;
    cin >> desconto;
    if (desconto == "nao"){
        soma = dias_mes * valor_hora;
        cout << fixed << setprecision(2);
        cout << "Sal�rio bruto: R$ " << soma << endl;
        cout << "Descontos: R$ " << valor_desconto << endl;
        cout << "Sal�rio L�quido: R$ " << soma << endl;
    } else if (desconto == "sim") {
        cout << "Quanto � o seu desconto?" << endl;
        cin >> valor_desconto;
        soma = dias_mes * valor_hora;
        soma_desconto = soma - valor_desconto;
        cout << fixed << setprecision(2);
        cout << "Sal�rio bruto: R$ " << soma << endl;
        cout << "Descontos: R$ " << valor_desconto << endl;
        cout << "Sal�rio L�quido: R$ " << soma_desconto << endl;
    }

    if (soma >= 1000) {
        soma_aumento = soma * 0.15f;
        aumento = soma_aumento + soma;
        cout << "Voc� recebeu um aumento de: R$ " << aumento;
    } else if (soma <= 1000 & desconto == "sim") {
        soma_aumento = soma_desconto * 0.20f;
        aumento = soma_aumento + soma_desconto;
        cout << "Voc� recebeu um aumento de: R$ " << aumento;
    }






    return 0;
}
