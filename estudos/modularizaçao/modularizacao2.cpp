#include <iostream>
using namespace std;

int busca (int v[],int n,int a)
{
    for (int i = 0; i < n; i++)
    {
        if (a==v[i])
        {
            return i;
        }
        
    }
    
    int resultado = -1;

    return resultado;
}


int main(){

    int n;
    cin >> n;

    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    
    int num;
    cin >> num;

    cout << busca(vet,n,num) << endl;

    return 0;
}