#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream arq("dados.txt" , ios::app);

    float soma = 0.0;
    int num = 0;
    float valor;

    if (arq){
    
     while ( arq >> valor ) {

        soma += valor;
        num ++;
     }

     
        cout << soma/num << endl;



    } else

    cout << "arquivo nao pode ser aberto" << endl;

    
    return 0;
}