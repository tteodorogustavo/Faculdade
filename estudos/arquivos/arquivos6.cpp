#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    float valor1,valor2,valor3,valor4,valor5,valor6,valor7,valor8;
    float media;

    ifstream arquivo("dados.txt");
    arquivo >> valor1 >> valor2 >> valor3 >> valor4 >> valor5 >> valor6 >> valor7 >> valor8;
    media = (valor1 + valor2 + valor3 + valor4 + valor5 + valor6 + valor7 + valor8)/8;

    ofstream arquivo2("media.txt");
    arquivo2 << fixed << setprecision(3) << media << endl;


    return 0;
}