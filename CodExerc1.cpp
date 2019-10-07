#include <iostream>
using namespace std;

int main()
{
int num1, num2, num3;
int media, mediaf;
cout << "Digite a nota de av1: \n";
cin >> num1;
cout << "Digite a nota da av2: \n";
cin >> num2;
media = num1 + num2;
media = media /2;

if ( media >= 7 )
{ 
     cout << "\nO aluno foi aprovado.\n";
}
else ( media < 7);
{
     cout << "\nO aluno precia fazer av3.\n";
}
cout << "Digite a nota do aluno na av3: \n";
cin >> num3;
if ( num3 > num2 > num1)
mediaf = num3 + num2;
mediaf = mediaf /2;


system ("pause");
}