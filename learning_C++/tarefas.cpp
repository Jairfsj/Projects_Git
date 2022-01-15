#include <iostream>
using namespace std;
int main() {
   int idade, contador;
   string nome;
  
   for (contador = 0; contador < 20; contador++) {
     cin >> nome >> idade;
     if (idade > 30) {
       cout << nome;
     }
  }
 
   system("pause");
   return 0;
}
