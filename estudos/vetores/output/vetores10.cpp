#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;


    char vetor[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    
    char caracterInicial, caracterFinal;
    cin >> caracterInicial >> caracterFinal;

    int posicaoInicial = -1;

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] == caracterInicial)
        {
            posicaoInicial=i;
        }
        
    }

    int posicaoFinal = -1;
    
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] == caracterFinal)
        {
            posicaoFinal=i;
        }
        
    }
    
    if (posicaoFinal<posicaoInicial)
    {
        int aux = posicaoInicial;
        posicaoInicial=posicaoFinal;
        posicaoFinal=aux;
    }
    
    for (int i = posicaoInicial+1; i < posicaoFinal; i++)
    {
        cout << vetor[i] << " ";
    }
    

    return 0;
}