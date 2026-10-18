#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main(){
    int n1, n2;

    cout<< "digite dois numeros positivos:\n";
    cin>> n1>>n2;

    for (int i >n1 ; i<n2; i++){
        i *7;
        cout<< i<<endl;
    }

    return 0;
}