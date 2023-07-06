#include <iostream>
using namespace std;

int main(){

    float vetor[10];
    int cont = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> vetor[i];
        
        if (vetor[i]>=0)
        {
            cont++;
        }
        
        
    }
    
    cout << cont << endl;

    double soma = 0;

    for (int i = 0; i < 10; i++)
    {
        if(vetor[i]<0)
        {
            soma += vetor[i];
        }
        
    }
    
    cout << soma << endl;


    return 0;
}