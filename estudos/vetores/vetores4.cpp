#include <iostream>
using namespace std;



int main(){

    char vetorRespostas[10];
    char vetorAluno1[10];
    char vetorAluno2[10];

    int acertosAluno1 = 0;
    int acertosAluno2 = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> vetorRespostas[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        cin >> vetorAluno1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> vetorAluno2[i];
    }
    cout << endl;

    for (int k = 0; k < 10; k++)
    {
        if (vetorAluno1[k]==vetorRespostas[k])
        {
            acertosAluno1++;
        }
        if (vetorAluno2[k]==vetorRespostas[k])
        {
            acertosAluno2++;
        }
        
    }
    
    cout << acertosAluno1 << endl;
    if (acertosAluno1>=6)
    {
        cout << "APROVADO" << endl;
    }else
    {
        cout << "REPROVADO" << endl;
    }
    cout << acertosAluno2 << endl;
    if (acertosAluno2>=6)
    {
        cout << "APROVADO" << endl;
    }else
    {
        cout << "REPROVADO" << endl;
    }
    


    return 0;
}