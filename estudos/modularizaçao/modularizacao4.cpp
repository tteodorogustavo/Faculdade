#include <iostream>
using namespace std;

int busca(int tam,int vet[])
{
    int maiorvalor=0;

    for (int i = 0; i < tam; i++)
    {
        if (vet[i]>=maiorvalor)
        {
            maiorvalor=vet[i];
        }
        
    }
    
    return maiorvalor;
}

int main(){

    int tamanho;
    cin >> tamanho;

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }
    
    cout << busca(tamanho,vetor);

    return 0;
}