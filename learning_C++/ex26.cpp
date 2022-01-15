#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n1, n2, sub, mult, qd, r;
   float dr, p, soma;
   cout<< "Digite um numero inteiro: ";
   cin>> n1;
   cout<< "Digite outro numero inteiro: ";
   cin>> n2;

   soma = n1 + n2 ;
   sub = n1 - n2;
   mult = n1 * n2;

   if (n2 != 0){
    qd = n1/n2;
    r = n1%n2;
    dr = n1/float(n2) ;
    p =powf(float(n1), float(n2)) ;
   
   }
   


   cout<<" A soma entre os numeros é: "<<soma<<endl; 
   cout<<" A subtração entro os numeros é: "<<sub<<endl; 
   cout<<" A multiplicação entre os numeros é: "<<mult<<endl; 
     
   if (n2 != 0){

    cout<<" O quoeficiente da divisão entre os numeros é: "<<qd<<endl; 
    cout<<" O resto da divisão é: "<<r<<endl;  
    cout<<" O resultado de divisão real entre os numeros é: "<<dr<<endl;  
   }
   else{
      cout<<"\n\nNao existe divisão de zero !" <<endl;
   }
   cout<<" O resultado da potenciação entre o 1º e o 2º é:  "<<p;

   system("pause");
   return 0;

}
