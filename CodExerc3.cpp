//Matriz
#include <iostream>
using namespace std;

int main()
{
     //[linha][coluna]
    int numeros[3][4];
    
    for(int linha = 0; linha < 3;linha++)
    {
         for(int coluna = 0; coluna < 4; coluna ++)
         {
             if ( linha == 0 || linha == 1| coluna == 0 || coluna == 2)
             {
             	numeros[linha][coluna] = 10;
			 }
			 else if ( linha == 2 || coluna == 1)
			 {
			 	numeros [linha][coluna] = 5;
			 }
             
         }
    }
    
    for(int linha = 0; linha < 3; linha ++)
    {
         for(int coluna = 0; coluna < 4; coluna ++)
         {
            cout << numeros[linha][coluna] << "\t";
         }
         cout << "\n";
    }
    system ("pause");
}
