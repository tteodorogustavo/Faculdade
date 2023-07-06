#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){

    
    
    int tam;
    cin >> tam;
    int vetor1[tam];
    for (int i = 0; i < tam; i++)
    {
       cin >> vetor1[i]; 
    }
    
    
    int tam2;
    cin >> tam2;
    int vetor2[tam2];
    int tam3 = (tam+tam2);
    int vetor3[tam3];
    for (int j = 0; j < tam2; j++)
    {
       cin >> vetor1[j];

       for (int k = 0; k < tam3 ; k++)
       {
            if (vetor1[j]==vetor2[k])
            {
                cin.ignore();
            }else
            {
                for (int g = 0; g < tam3; g++)
                {
                    vetor3[tam3] = vetor1[tam] + vetor2[k];
                }
                
            }
            
            
       }
       
    }

   while (vetor3)
   {
     cout << vetor3[tam3] <<endl;
   }
   

    return 0;
}