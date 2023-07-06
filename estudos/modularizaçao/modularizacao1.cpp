#include <iostream>
using namespace std;

int busca(int vetor[],int tam,int num)
{
    for (int i = 0; i < tam; i++)
    {
        if (num==vetor[i])
        return 1;
    }
    return 0;
}

int main(){

    int tam;
    cin >> tam;
        
    int vetor[tam];
    for(int i = 0; i < tam; i++)
    {
        cin >> vetor[i];
    }
    int num;
    cin >> num;

    cout << busca(vetor,tam,num) << endl;

    return 0;
}