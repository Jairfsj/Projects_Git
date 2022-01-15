#include <iostream>
using namespace std;

int main()
{
   string nome;
   int trab, i;
   float htrab, salh, salb, sallq;
   
   for (i = 0; i <= 3; i++){
      cout<<"Infome o nome do empregado: ";
      cin>> nome;
      cout<<"Informe as horas trabalhadas pelo funcionairo: ";
      cin>> htrab;
      cout<<"Infome o salario por horas trabalhadas: ";
      cin>> salh;
     }
   
   salb = htrab*salh;
   sallq = salb - (salb*0.11);
   
  for (i = 0; i <= 3; i++){
     cout<<"\nO salario liquido dos funcionarios é: "<<sallq;
  }
   system("pause");
   return (0);
  
}
