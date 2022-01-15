#include <iostream>
using namespace std;

int main()
{
  int num,maior,ind;
  maior = 0;
  for (ind= 1; ind <=100; ind=ind+1)
  {

   scanf("%d",&num);
   if (num > maior)
     maior=num;
  
  }

  printf ("%d é o maior dos números lidos ",maior);

  system ("pause");
  return 0;


}  
