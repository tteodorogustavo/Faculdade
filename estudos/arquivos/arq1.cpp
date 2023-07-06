#include <iostream>
#include <fstream>

using namespace std;

int main() {
   
    string nomeArq, conteudo;

    cin >> nomeArq;
    
    ifstream arquivo (nomeArq);

    getline(arquivo, conteudo);

    cout << conteudo;

    return 0;
}
