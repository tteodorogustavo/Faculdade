#include <iostream>

using namespace std;

int main(){

    double a,b;
    int x;
    double media,subtrai,produto,divisao;
    cin >> a >> b >> x;

    if (x>4)
    {
       cout << "ERRO";
    }
    
    
    if((x==1)){

        media=(a+b)/2;

        cout << media;

    }else if(x == 2){

        if(a>b){
            subtrai = a-b;

        }else if(b > a){

            subtrai = b-a;

        }
        cout << subtrai;
    }else if (x == 3)
    {
        produto = a*b;

        cout << produto;

    }else if (x==4){

        divisao =  a/b;

        cout << divisao;

    }
    return 0;
}