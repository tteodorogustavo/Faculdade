#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int numero1 , numero2 , numero3;

    cout << "digite tres numeros" << endl;

    cin >> numero1 >> numero2 >> numero3;

    float media=0.0;

    media=((numero1+numero2+numero3)/3);

    cout << media;

    return 0;
}