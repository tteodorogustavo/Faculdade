#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    ifstream arquivo("notas.txt");
    float media;
    float nota1, nota2, nota3, peso1, peso2, peso3;
    arquivo >> nota1 >> peso1 >> nota2 >> peso2 >> nota3 >> peso3;

    media=((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);

    ofstream arquivo2("final.txt");
    arquivo2 << fixed << setprecision(2) << media << endl;

    return 0;
}