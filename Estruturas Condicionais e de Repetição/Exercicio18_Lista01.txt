#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char letra;
    
    cout<< "Digite uma letra: ";
    cin>> letra;
    
    letra = tolower (letra);
    
    switch (letra)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
            cout<< "A letra é uma vogal."<<endl;
            break;
            
        default:
            cout<< "A letra é uma consoante."<<endl;
    }
}