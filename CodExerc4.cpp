//Matriz
#include <iostream>
using namespace std;

int main()
{
     //[linha][coluna]
    int numeros[11][11];
    
    for(int linha = 0; linha < 11; linha++)
    {
         for(int coluna = 0; coluna < 11; coluna++)
         {
            numeros[linha][coluna] = 1;
         }
    }


    for(int linha = 0; linha < 11; linha++)
    {
         for(int coluna = 0; coluna < 11; coluna++)
         {
             if (linha != 0 & linha != 10 & ((coluna == 0 & linha == 1) || coluna == 1 || (coluna == 2 & (linha == 7 || linha == 1) ) || (coluna == 3 & linha != 2) || (coluna == 4 & (linha == 1 || linha == 9)) || (coluna == 5 & linha != 2) || (coluna == 6 & (linha == 5 || linha == 9)) || (coluna == 7 & linha != 6) || (coluna == 8 & (linha == 1 || linha == 7 || linha == 9)) || (coluna == 9 & (linha != 2 & linha != 8)) || (coluna == 10 & linha == 9)))
             {
                  numeros[linha][coluna] = 0;
             }
         }
  
    }

    for(int linha = 0; linha < 11; linha++)
    {
         for(int coluna = 0; coluna < 11; coluna++)
         {
            cout << numeros[linha][coluna] << "\t";
         }
         cout << "\n";
    }
    system ("pause");
}
