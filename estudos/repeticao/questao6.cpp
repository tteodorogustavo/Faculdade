#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string nomearq;
    char caracteres;
    int resultado=0;

    cin >> nomearq;

    ifstream arquivo(nomearq);

    if (arquivo)
    {
    
        while (arquivo >> caracteres)
        {
        resultado++;
        }
        
    }
    cout << resultado << endl;

    return 0;
}