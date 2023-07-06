#include <iostream>
using namespace std;

int main(){

    int tam;
    cin >> tam;
    int numeros[tam];
    int posicaoMenor=0;
    int posicaoMaior=0;
    
    for (int i = 0; i < tam; i++)
    {
        cin >> numeros[i];
    }
    int menorNum=numeros[0];

    for (int i = 0; i < tam; i++)
    {
    
        if (numeros[i]<menorNum)
        {
            menorNum=numeros[i];
        }
    }

    int maiorNum=menorNum;
    for (int i = 0; i < tam; i++)
    {
        if (numeros[i]>maiorNum)
        {
            maiorNum=numeros[i];
        }
    }
    for (int i = 0; i < tam; i++)
    {
        if (numeros[i] == maiorNum)
        {
            posicaoMaior = i;
        }
    }
    for (int i = 0; i < tam; i++)
    {
       if (numeros[i] == menorNum)
        {
            posicaoMenor = i;
        }
    }
    
    cout << maiorNum << " " << menorNum << " " << posicaoMaior << " " << posicaoMenor << endl;

    return 0;
}