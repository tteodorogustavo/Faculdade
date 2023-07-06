#include <iostream>

using namespace std;

double tamanho;
float peso;

int main(){
  
    cin >> peso;
    cin >> tamanho;

    if (tamanho<1.20 and peso<60.0)
    {
        cout << "A";
        
    }else if (tamanho<1.20 and (peso>=60.0 and peso<=90.0))
    {
        cout << "D";
    
    }else if (tamanho<1.20 and peso>90.0)
    {
        cout << "G";

    }else if ((tamanho>=1.20 and tamanho<=1.70) and peso<60.0)
    {
        cout << "B";
        
    }else if ((tamanho>=1.20 and tamanho<=1.70) and (peso>=60.0 and peso<=90.0))
    {
        cout << "E";
    
    }else if ((tamanho>=1.20 and tamanho<=1.70) and peso>90.0)
    {
        cout << "H";
    
    }else if ((tamanho>1.70) and peso<60.0)
    {
        cout << "C";
        
    }else if ((tamanho>1.70) and (peso>=60.0) and (peso<=90.0))
    {
        cout << "F";
    
    }else if ((tamanho>1.70) and (peso>90.0))
    {
        cout << "I";
    }


    return 0;
}