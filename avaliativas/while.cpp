#include <iostream>
using namespace std;

int main(){

    int numero;

    int mult=1;

    cin >> numero;

    while (mult<=10){ 

        cout << numero << " x " << mult << " = " << numero*mult << endl;

        mult++;

    }
    
    
    
    return 0;
}