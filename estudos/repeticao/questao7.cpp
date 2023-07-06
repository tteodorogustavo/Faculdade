#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string nomearq, palavra,find;
    int cont=0;

    cin >> nomearq >> palavra;

    ifstream arquivo(nomearq);

    if (arquivo)
    {
    
        while (arquivo >> find)
        {
            if (find == palavra)
            {

                cont++;
        
            }
        }
    }else 
    cout << "falhou" << endl;
    
    cout << cont << endl;

    return 0;
}