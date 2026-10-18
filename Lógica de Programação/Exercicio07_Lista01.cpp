#include<iostream>
using namespace std;
int main()
{
    double lado, area;
    
    cout<< "Insira a medida do lado do quadrado:\n ";
    cin>> lado;
    
    area = lado*lado;
    
    cout<< "O dobro da área do quadrado é "<< area*2 <<endl;
    
    return 0;
}