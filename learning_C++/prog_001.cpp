#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   int vet[100],posicao;
   for (posicao=0;posicao<100;posicao++)
   {
     scanf("%d",&vet[posicao]);
   }
   
   for (posicao=99;posicao>=0;posicao--)
   
   { 
     printf ("%d \n",vet[posicao]);
   }
   system ("pause");
   return 0;


}  
