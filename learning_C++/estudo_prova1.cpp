#include <iostream>
using namespace std;
int main()
{
   


   int i, vet[10];
   for(i = 0; i<10; i++){
     vet[i]=(i + 1) * 2;
   }
   for (i = 0; i<10; i++){
     cout <<vet[i] <<"";
   }
   
   system("pause");
   return(0);   

}
