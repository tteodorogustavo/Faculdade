#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int totaldevotos=0;
    int voto1=0, voto2=0, voto3=0, voto4=0, votonulo=0, votobranco=0;
    int votos;
    


    cin >> votos; 

    while(votos!=0)
    {
        if (votos == 1)
        {
            voto1++;

        }else if (votos == 2)
        {
            voto2++;

        }else if (votos == 3)
        {
            voto3++;

        }else if (votos == 4)
        {
            voto4++;
        
        }else if (votos == 5)
        {
            votonulo++;

        }else if (votos == 6)
        {
            votobranco++;
        }
        
        
        totaldevotos++;
        cin >> votos;
        
    } 
    
    cout << "1: " << voto1 << " " << fixed << setprecision(11) << float (voto1)/totaldevotos << endl;
    cout << "2: " << voto2 << " " << fixed << setprecision(11) << float (voto2)/totaldevotos << endl;
    cout << "3: " << voto3 << " " << fixed << setprecision(11) << float (voto3)/totaldevotos << endl;
    cout << "4: " << voto4 << " " << fixed << setprecision(11) << float (voto4)/totaldevotos << endl;
    cout << "5: " << votonulo << " " << fixed << setprecision(11) << float (votonulo)/totaldevotos << endl;
    cout << "6: " << votobranco << " " << fixed << setprecision(11) << float (votobranco)/totaldevotos << endl;
    cout << "7: " << totaldevotos - votonulo - votobranco << " " << float ((totaldevotos - votonulo - votobranco))/float (totaldevotos) << endl;


    return 0;
}