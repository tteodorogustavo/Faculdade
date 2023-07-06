#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    float convites;
    float custo;
    int quantidade;

    ifstream arquivo("teatro.txt");
    arquivo >> custo >> convites;

    quantidade = ceil(custo / convites);

    ofstream arquivo2("convite.txt");
    arquivo2 << quantidade << endl;
    cout << quantidade << endl;
   

    return 0;
}