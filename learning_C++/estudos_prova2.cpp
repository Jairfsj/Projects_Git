#include <iostream>
using namespace std;
int main()
{
   int i = 1,num,cont = 0;
   int vet[10]={7,1,5,3,9,8,6,4,2,0};
   num = vet [0];
   for (i = 1; i<10; i++) {
      if (vet[i]>num)num = vet[i];
   }
   cout << num;

   system("pause");
   return(0);   

}
