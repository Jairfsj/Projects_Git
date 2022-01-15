#include <iostream>
using namespace std;

int main()
{   //Nessa parte foram declaradas as var;

    float d1, r1, d2, r2, td, saldoa, totalr, totald,  saldof; 


    // Construção da logica do programa com saidas e entradas 
    
    cout<< "Digite seu Saldo que vc deseja iniciar no CITYBANK, por favor: ";
    cin >> d1;

    cout<<"Deseja retirar qual valor? ";
    cin >>  r1;

    cout<<"Digite o valor do seu no aporte financeiro: ";
    cin >> d2;

    cout<<"Digite quanto deseja retiar: ";
    cin >> r2;
    
    // Execução do Programa
    
    saldoa = d1;
    totalr = (r1+r2);
    totald = (d1+d2);
    saldof = (d1+d2) - (r1+r2);
  
    //Saidas do programa com seus resultados . 
    cout<<"Seu Saldo atual é: "<<saldoa << endl;  
    cout<<"O valor total dos seus depositos foi: "<<totald << endl;  
    cout<<"Seu total de retiradas : "<<totalr << endl; 
    cout<<"Seu Saldo restante é de: " <<saldof;

    system("pause");
    return 0;

}
