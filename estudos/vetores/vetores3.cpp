#include <iostream>

using namespace std;

int main(){

    int t, n ;

    cin >> t;

    int vet[t];

    if (t>=3)
    {

        for (int i = 0; i < t; i++)
        {
            cin >> vet[i];
        }
    
        cin >> n;
    }

    bool encontrou = false;

    for (int i = 0; i < t and !encontrou; i++)
    {
        for (int j = 0; j < t and !encontrou ; j++)
        {
            for (int k = 0; k < t and !encontrou; k++)
            {
                if (vet[i]+vet[j]+vet[k]==n and i != j and i != k and j != k)
                {
                    cout << vet[i] << " " << vet[j] << " " << vet[k] << endl;
                    encontrou=true;
                }
                
            }
            
        }
        
    }
    if (!encontrou)
    {
        cout << "-1" << endl;
    }
    
    


    return 0;
}