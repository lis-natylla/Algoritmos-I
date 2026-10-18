#include <iostream>
using namespace std;
int main()
{
    float peso_inicial, peso_excesso, valor_multa;
    
    cout<< "Qual o peso de peixes?\n";
    cin >> peso_inicial;
    
    if (peso_inicial > 50){
        peso_excesso = peso_inicial - 50;
        valor_multa = peso_excesso*4;
        cout<< "O peso dos peixes excedeu "<< peso_excesso << " quilos, e você deverá pagar uma multa de "<< valor_multa << " reais"<<endl;
    }
    else {
        cout << "O peso dos peixes está dentro do regulamento de pesca!"<< endl;
    }
    return 0;
}