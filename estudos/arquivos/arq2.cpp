#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string palavra, nomeArq;


    cin >> nomeArq >> palavra;

    ofstream arquivo(nomeArq);

    arquivo << palavra << endl;

    return 0;
}