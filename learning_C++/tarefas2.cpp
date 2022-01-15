#include <iostream>
using namespace std;
int main() {
   int idade, contador;
   string nome;
   
   contador = 0;
   while (contador < 20) {
     cin >> nome >> idade;
  
     if (idade > 30) {
       cout << nome;
     }
     contador++;
   }
   return 0;

}
