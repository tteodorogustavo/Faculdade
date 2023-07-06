#include <iostream>
using namespace std;

int gratuitos(int vet[10],int vetgratis[10])
{
    
    for (int i = 0; i < 10; i++)
    {
        vetgratis[i] = vet[i]/10;
    }
    
    return 0;
}

int main(){

    int vet[10];
    int vetgratis[10];


    for (int i = 0; i < 10; i++)
    {
        cin >> vet[i];
    }
    
    gratuitos(vet,vetgratis);

    for (int i = 0; i < 10; i++)
    {
        cout << vetgratis[i] << " ";
    }
    




    return 0;
}