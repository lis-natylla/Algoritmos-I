#include <iostream>
using namespace std;
int main()
{
    int mes;
    
    cout<< "Digite um número correspondente ao mês:\n";
    cin>> mes;
    
    switch (mes) {
        case 1:
            cout << "O mês é janeiro\n";
            break;
        case 2:
            cout << "O mês é fevereiro\n";
            break;
        case 3:
            cout << "O mês é março\n";
            break;
        case 4:
            cout<< "O mês é abril\n";
            break;
        case 5:
            cout<<"O mês é maio\n";
            break;
        case 6:
            cout<< "O mês é junho\n";
            break;
        case 7:
            cout<< "O mês é julho\n";
            break;
        case 8:
            cout<< "O mês é agosto\n";
            break;
        case 9:
            cout<<"O mês é setembro\n";
            break;
        case 10:
            cout<<"O mês é outubro\n";
            break;
        case 11:
            cout<<"O mês é novembro\n";
            break;
        case 12:
            cout<< "O mês é dezembro\n";
            break;
        default:
            cout<< "O número inserido não corresponde a nenhum mês. Tente novamente.\n";
            
        
    }
    
    return 0;
}