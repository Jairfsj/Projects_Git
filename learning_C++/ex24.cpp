#include <iostream>
using namespace std;
int main()
{
    float d1, r1, d2, r2, td, saldoa, totalr, totald,  saldof; 

    cout<< "Digite seu Saldo que vc deseja iniciar no CITYBANK, por favor: ";
    cin >> d1;

    cout<<"Deseja retirar qual valor? ";
    cin >>  r1;

    cout<<"Digite o valor do seu no aporte financeiro: ";
    cin >> d2;

    cout<<"Digite quanto deseja retiar: ";
    cin >> r2;
   
    saldoa = d1;
    totalr = (r1+r2);
    totald = (d1+d2);
    saldof = (d1+d2) - (r1+r2);
  
    cout<<"\t\t\Seu Saldo atual é: "<<saldoa << endl; 
    cout<<"O valor total dos seus depositos foi: "<<totald << endl; i
    cout<<"Seu total de retiradas : "<<totalr << endl; 
    cout<<"Seu Saldo restante é de: " <<saldof;
    
    system("pause");
    return 0;
    
}
