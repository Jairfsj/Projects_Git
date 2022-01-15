#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{ 
   const int tamvet=5, tamlista=5;
   int vet[tamvet],numero,posicao,posvet,achou;
   printf ("Digite os dados para o valor \n");
   for (posicao=0;posicao<tamvet;posicao++)
   {
     scanf("%d",&vet[posicao]) ;
   }
   printf("Digite os números da lista \n");
   for (posicao=1;posicao<=tamlista;posicao++)
   {
     printf("\nDigite um numero: ");
     scanf ("%d",&numero) ;
     posvet=0;
     achou=0;
     while (posvet<=tamvet-1 && achou==0)
     {
       if (numero==vet[posvet])
           achou=1;
       else 
           posvet=posvet+1;
     }
     if (achou==1)
       printf ("achou numero na posicao: %d",posvet) ;
     else
       printf("nao achou o numero");

     system("pause");
     return 0;
   }
}
