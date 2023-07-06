#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int horas, minutos;

    int convertmin, convertseg,totalmin;

    cin >> horas >> minutos;

    convertmin = horas*60;
    totalmin = convertmin+minutos;
    convertseg = totalmin*60;

    ofstream arquivo("saida.txt");
    arquivo << convertmin << endl << totalmin << endl << convertseg << endl;


    return 0;
}