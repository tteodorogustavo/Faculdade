#include <iostream>
using namespace std;

int main(){

    string vetor[8];

    for (int i = 0; i < 8; i++)
    {
        vetor[i]="disponivel";
    }

    int naoAtendidos=0;
    bool parada = true;

    do
    {
        string nome;
        int numero;

        cin >> nome;

        if (nome=="fim")
        {
            parada = false;
        }
        
        cin >> numero;

        if (vetor[numero]=="disponivel")
        {
            vetor[numero]=nome;
        }else
        {
            naoAtendidos++;
        }
    
    }while (parada);

    for (int i = 0; i < 8; i++)
    {
        cout << vetor[i] << endl;
    }
    
    cout << naoAtendidos - 1 << endl;

    return 0;
}