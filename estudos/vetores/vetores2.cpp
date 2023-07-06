#include <iostream>

using namespace std;

int main(){

    int vetores[10],vetor2[10],vetor3[10];
    int maiorMultiplo2=0, maiorMultiplo3=0;

    for (int i = 0; i < 10; i++)
    {
        cin >> vetores[i];
    }



    for (int i = 0; i < 10; i++)
    {
    
       if (vetores[i] % 2 == 0)
        {
            vetor2[i] = vetores[i];

            if (vetor2[i] > maiorMultiplo2)
            {
                maiorMultiplo2=vetor2[i];
            }
        }
    
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vetor2[i] << " ";
    }
    

    for (int i = 0; i < 10; i++)
    {
        if (vetores[i] % 3 == 0)
        {
            vetor3[i] = vetores[i];

            if (vetor2[i]>maiorMultiplo2)
            {
                maiorMultiplo3=vetor2[i];
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << vetor2[i] << " " ;
    }
    cout << endl;
    cout << maiorMultiplo2 << " " << endl;
    
    
    
    
    for (int i = 0; i < 10; i++)
    {
        cout << vetor3[i] << " ";
    }

    cout << endl;
    cout << maiorMultiplo3 << " " << endl;


    return 0;
}