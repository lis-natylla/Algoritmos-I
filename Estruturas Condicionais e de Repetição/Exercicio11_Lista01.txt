#include<iostream>
using namespace std;
int main()
{
    int inteiro1, inteiro2;
    char operador;
    
    cout << "Digite o primeiro número:\n";
    cin>> inteiro1;
    
    cout<< "Digite o segundo número:\n";
    cin>> inteiro2;
    
    cout<< "Indique o operador:\n";
    cin>> operador;
    
    switch (operador) {
        case '+':
            cout<< "O resultado da operação é " << inteiro1+inteiro2;
            break;
        case '-':
            cout << "O resultado da operação é "<< inteiro1-inteiro2;
            break;
        case '*':
            cout<< "O resultado da operação é "<< inteiro1*inteiro2;
            break;
        case'/':
            if(inteiro2!= 0)
            cout<< "O resultado da operação é "<< inteiro1/inteiro2;
            else
            cout << "Erro: A divisão por zero é indefinida!\n";
            break;
        case '%':
            if (inteiro2!= 0)
            cout<< "O resultado da operação é "<< inteiro1%inteiro2;
            else
            cout<< "Erro: O resto na divisão por zero é indefinido!";
            break;
        default:
            cout << "O operador inserido é inválido! Tente novamente\n";
    }
    return 0;
}