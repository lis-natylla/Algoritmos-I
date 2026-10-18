#include<iostream>
using namespace std;
int main()
{
    int horas;
    float valor_hora;
    
    cout<< "Quanto você ganha por hora?\n ";
    cin>> valor_hora;
    cout<< "Quantas horas você trabalhou durante o mês?\n";
    cin>> horas;
    
    cout<< "O seu salário total mensal foi de "<< valor_hora*horas << " reais"<<endl;
    
    return 0;
}