#include <iostream>
using namespace std;

void Max2(float vetor[],int tam,float& a,float& b)
{
    for (int i = 2; i < tam; i++)
    {   
        if (vetor[i] > a)
        {
            b = a;
            a = vetor[i];

        }else if (vetor[i] > b)
        {
            b = vetor[i];
        }   
    }   
}


int main(){

    int tamanho;
    cin >> tamanho;

    if (tamanho==0)
    {
        cout << "0 0" << endl;
        return 0;
    }
    
    float vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }
    float a;
    float b;
    
    if (vetor[0] > vetor[1])
    {
        a = vetor[0];
        b = vetor[1];
    }
    else
    {
        a = vetor[1];
        b = vetor[0];
    }
    

    Max2(vetor,tamanho,a,b);

    cout << a << " " << b << endl;



    return 0;
}