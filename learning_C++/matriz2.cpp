#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
   int mato[4][4],matg[4][4],lin,col;
   printf ("\n Digite os numeros da matriz original: \n");
   for (lin=0;lin<4;lin++)
     for (col=0;col<4;col++)
     {
       scanf("%d",&mato[lin][col]);
       matg[col][lin]=mato[lin][col];
     } 
   printf("\n Matriz Gerada \n");
   for(lin=0;lin<4;lin++)
   {
     for (col=0;col<4;col++)
       printf ("%d ",matg[lin][col]);
     printf("\n");
     
   }
   return 0;
}
