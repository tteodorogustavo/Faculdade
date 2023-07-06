#include <iostream>
using namespace std;

int main(){

    int divisor,dividendo, quociente=0;

    cin >> dividendo >> divisor;

    while (dividendo>=divisor)
    {
        dividendo-=divisor; 
        
        quociente++;
    }
    
    cout << quociente;


    return 0;
}