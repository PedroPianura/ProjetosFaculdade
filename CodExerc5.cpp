#include <iostream>
using namespace std;

int main()
{

int num, numsn;
int total;
int pago, troco;
cout << "Pedido 1 = Trio ( 12 reais). ";
cout << "Pedido 2 = Burguer com Refri ( 9 reais). ";
cout << "Pedido 3 = Burguer e Fritas ( 10 reais). \n" ;
cout << "Digite o numero do pedido: ";
cin >> num;
if (num == 1) 
{
    total = 12;	
}
else if (num == 2)
{
	total = 9;
}
else if (num == 3)
{
	total = 10;
}
cout << "\nO cliente deseja um Sundae ?\n Digite 1 para Sim ou 0 para Nao.\n";
cin >> numsn;
if (num == 1 && numsn == 1)
{
	total = total + 3;
}
else if (num == 2 && numsn == 1)
{
	total = total + 5;
}
else if ( num == 3 && numsn == 1)
{
	total = total + 5;
}
cout << "\nO preco final eh:" << total << "\n";
cout << "\nPago: \n";
cin >> pago;
troco = pago - total ;
cout << "\nO Troco eh: " << troco << "\n";


system ("pause");
}
