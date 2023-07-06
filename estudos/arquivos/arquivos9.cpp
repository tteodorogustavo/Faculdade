#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    float potencia =18;
    float metros2;
    float x,y ;
    float gasto;

    cin >> x >> y;

    metros2 = x*y;

    gasto = (metros2 * potencia);

    ofstream arquivo ("potencia.txt");
    arquivo << fixed << setprecision(1) << metros2 << "m2" << endl << fixed << setprecision(1) << gasto << "W";

    return 0;
}