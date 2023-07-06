#include <iostream>

using namespace std;

int idade;
float peso;

int main(){
  
    cin >> idade;
    cin >> peso;

    if (idade<20 and peso<=60.0)
    {
        cout << "9";
        
    }else if (idade<20 and (peso>60.0 and peso<90.0))
    {
        cout << "8";
    
    }else if (idade<20 and peso>=90.0)
    {
        cout << "7";

    }else if ((idade>=20 and idade<50) and peso<=60.0)
    {
        cout << "6";
        
    }else if ((idade>=20 and idade<50) and (peso>60 && peso<=90))
    {
        cout << "5";
    
    }else if ((idade>=20 and idade<50) and peso>=90.0)
    {
        cout << "4";
    
    }else if ((idade>50) and peso<=60.0)
    {
        cout << "3";
        
    }else if ((idade>50) and (peso>60 && peso<=90))
    {
        cout << "2";
    
    }else if ((idade>50) and peso>=90.0)
    {
        cout << "1";
    }
    

    
    



    return 0;
}
