#include <iostream>
using namespace std;
int main() {
   int idade;
   string nome;
   
   cin >> idade;
   while (idade >= 0) {
     cin >> nome;
     if (idade > 30) {
       cout << nome;
      }
   }
   

   system("pause");
   return 0;

}
