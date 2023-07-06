#include <iostream>
using namespace std;

int main(){

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if (n1 < (n2+n3) and n2 < (n1+n3) and n3 < (n1+n2)){

        cout << "triangulo existente";

        if (n1 == n2 or n2 == n3) {

            cout << "triangulo isoceles";

        }
        if else (n1 == n2) and (n1 == n3){

            cout << "triangulo equilatero";

        }
        else 
        {
            cout << "triangulo escaleno";
        }
    
    }else {

        cout << "triangulo inexistente";

    }

    return 0;

}