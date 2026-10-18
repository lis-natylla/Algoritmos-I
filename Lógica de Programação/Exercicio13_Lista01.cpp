#include<iostream>
using namespace std;

int main()
{
    float valor_hora, numero_horas, salario_bruto, salario_liquido,
          desconto_INSS, desconto_IR, desconto_sindicato;
    
    cout << "Quanto voce ganha por hora?\n";
    cin >> valor_hora;
    
    cout << "Quantas horas voce trabalhou no mes?\n";
    cin >> numero_horas;
    
    salario_bruto = valor_hora * numero_horas;
    cout << "\nO salario bruto é: " << salario_bruto << "\n";
    
    desconto_INSS = 0.08 * salario_bruto;
    cout << "Você pagou " << desconto_INSS << " ao INSS\n";
    
    desconto_sindicato = 0.05 * salario_bruto;
    cout << "Você pagou " << desconto_sindicato << " ao sindicato\n";
    
    desconto_IR = 0.11 * salario_bruto;
    cout << "Você pagou " << desconto_IR << " de Imposto de Renda\n";
    
    salario_liquido = salario_bruto - desconto_INSS - desconto_IR - desconto_sindicato;
    cout << "O salario liquido é: " << salario_liquido << "\n";
    
    return 0;
}