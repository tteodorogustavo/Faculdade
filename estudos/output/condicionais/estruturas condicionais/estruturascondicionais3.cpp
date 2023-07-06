#include <iostream>

using namespace std;

int main(){
    
    double trabalho, avaliacao, exame;

    cin >> trabalho;
    cin >> avaliacao;
    cin >> exame;

    double mediaPonderada = (((trabalho*2) + (avaliacao*3) + (exame*5))/10);

    cout << "" << endl;

    if ((mediaPonderada>=8.0)and(mediaPonderada<=10))
    {
        cout << mediaPonderada << endl << "A" << endl;

    }else if ((mediaPonderada>=7.0)and(mediaPonderada<=7.9))
    {

        cout << mediaPonderada << endl << "B" << endl;

    }else if ((mediaPonderada>=6.0)and(mediaPonderada<=6.9))
    {

        cout << mediaPonderada << endl << "C" << endl;

    }else if ((mediaPonderada>=5.0)and(mediaPonderada<=5.9))
    {

        cout << mediaPonderada << endl << "D" << endl;

    }else if ((mediaPonderada>=0.0)and(mediaPonderada<=4.9))
    {

         cout << mediaPonderada << endl << "E" << endl;

    }


    return 0;
}