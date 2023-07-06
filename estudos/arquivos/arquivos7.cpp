#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string palavra1,palavra2,resultado;
    string nomearq1, nomearq2, arq3;

    cin >> nomearq1 >> nomearq2 >> arq3;

    ifstream arquivo1(nomearq1);
    arquivo1 >> palavra1;

    ifstream arquivo2(nomearq2);
    arquivo2 >> palavra2;
    
    resultado = palavra1 +" "+ palavra2;

    ofstream arquivo3(arq3);
    arquivo3 << resultado << endl;





    return 0;
}