#include <iostream>

using namespace std;

int main(){

    int dividendo, divisor, resto;

    cin >> dividendo >> divisor;

    while (divisor!=0)
    {
        resto = dividendo % divisor;

        dividendo = divisor;

        divisor = resto;
    }

    cout << dividendo << endl;
    

    return 0;
}