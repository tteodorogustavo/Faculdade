#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int n1,n2,n3;
    int N;

    cin >> N;

    n1= (N/100);
    n2= (N%100)/10;
    n3= (N%100)%10;

    cout << n1+n2+n3 << endl;

    ofstream arquivo("saida.txt");
    arquivo << n1*n2*n3;


    return 0;
}