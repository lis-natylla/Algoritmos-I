#include<iostream>
using namespace std;
int main()
{
    double temp_farenheit, temp_celcius;
    
    cout<< "Insira a temperatura em graus Farenheit:\n ";
    cin>> temp_farenheit;
    
    temp_celcius = (5*(temp_farenheit-32))/9;
    
    cout<< "A temperatura inserida corresponde a "<< temp_celcius << " °C"<<endl;
    
    return 0;
}