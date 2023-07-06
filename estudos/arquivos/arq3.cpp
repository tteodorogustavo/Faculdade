#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    float x1, y1, x2, y2;
    double long soma;

    ifstream arquivo("entradas.txt");

    arquivo >> x1 >> y1 >> x2 >> y2;

    soma=((x2 - x1) * (x2 - x1)) + ((y2-y1) * (y2-y1));

    cout << sqrt (soma) << endl;

    return 0;
}