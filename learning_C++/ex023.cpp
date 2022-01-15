#include <iostream>
using namespace std;

int main()
{
    float lp, mat, dr, media, mediap;

    cout << "Digite sua nota de Língua Protuguesa: ";
    cin >> lp;

    cout << "Digite sua nota de Matemática: ";
    cin >> mat;
    
    cout << "Digite sua nota de Direito: ";
    cin >> dr;

    media = (lp+mat+dr)/3;
    mediap = (2*lp + 4*mat +
             3.*dr) / 10;

    cout<<"Média: "<<media << endl;  cout<<"Média ponderada: "<<mediap;
    
    system("pause");
    return 0;


