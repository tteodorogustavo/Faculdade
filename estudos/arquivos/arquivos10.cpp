#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    float degrau;
    float altura;
    float quantidade;

    ifstream arquivo("entrada.txt");
    arquivo >> degrau >> altura;

    quantidade = ceil ((altura*100)/degrau);

    ofstream arquivo2("degraus.txt");
    arquivo2 << quantidade << endl;


    return 0;
}