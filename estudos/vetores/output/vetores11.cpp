#include <iostream>
using namespace std;

int main(){

    int vetor[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> vetor[i];
    }
    
    for (int i = 0; i < 9; i++)
    {
        bool primo = true;

        for (int j = 2; j < vetor[i]; j++)
        {
            if (vetor[i]%j==0)
            {
                primo = false;
            }
            
        }
        
        if (primo)
        {
            cout << vetor[i] << " " << i << endl;
        }
        
    }
    



    return 0;
}