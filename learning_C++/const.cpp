#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  

   const int tamvet=5;
   int vet1[tamvet],vet2[tamvet],posicao;
   for (posicao=0;posicao<tamvet;posicao++)
   { 
     scanf ("%d ",&vet1[posicao]);
     if (vet1[posicao]%2 == 0)
       vet2[posicao]=vet1[posicao]+1;
     else
       vet2[posicao]=vet1[posicao]-1;
   }
  printf ("Elementos de VET 1 e VET2: ");
  for (posicao=0;posicao<tamvet;posicao++)
  {
     printf ("%d ",vet1[posicao]);
     printf ("%d ",vet2[posicao]);

   }
  system("pause");
  return 0;
}
