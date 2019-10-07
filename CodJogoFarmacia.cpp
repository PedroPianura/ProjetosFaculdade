#include <iostream>
using namespace std;

int main()
{ 
int sim, nao;
int resposta;

    do 
{
cout << "\nOla doutor, seja bem vindo. Abaixo seguem as especificacoes do jogo";
cout << "\nEspecificacoes: \n";
cout << "Receitas azuis sao para medicamentos psicotropicos.\n";
cout << "Receitas amarelas sao para medicamentos entorpecentes.\n";
cout << "Receitas brancas sao para antibioticos.\n";
cout << "Caso entregue para o cliente o remedio errado, o Sr. serah demitido. \n";
cout << "Se consideras pronto para prosseguir ? (Digite 1 para sim e 2 para  nao)\n" ;
cin >> resposta;

      if (resposta == 2)
{
	cout << "\nVoce eh um covarde. O jogo termina aqui!!\n";
}
      else if ( resposta == 1)
       {
		cout << "\nBoa sorte\n";
       }
}
     while ( resposta != 1 & resposta!= 2);  

     do 
     {
cout << "\nFase 1: O cliente entra na drogaria com uma receita branca. Segundo ela, o medico lhe disse para comprar um Benzodiazepinico, um tipo de entorpecente.\n";
cout << "Depois de analisar o requerimento do paciente, voce decide vender o remedio para ela ou nao?.\n";
cout << "Responda 1 para sim e 2 para nao.\n";
cin >> resposta;

     if (resposta == 1)
{
	cout << "Eita, que erro bobo. Foi demitido e denunciado haha. Game over!\n";
}
     else if ( resposta == 2)
    { 
	cout << "Parabens. Voce tomou uma sabia decisao. Boa sorte na proxima fase.\n";
    }
}
     while ( resposta != 1 & resposta!= 2); 
     
     do
     {
	 
    cout << "\nFase 2: Um segundo cliente aparece na drogaria pedindo um Nimesulida, um tipo de  antienflamatorio, porem ele esta sem receita\n";
    cout << "Voce decide vender o remedio para ele ou nao?\n";
    cout << "Responda 1 para sim e 2 para nao.\n";
    cin >> resposta;
    
    if (resposta == 2)
    {
    	cout << "Deveria ter vendido rapaz. O cliente reclamou com o gerente e ele te demitiu. Ta feliz agora? Fim de jogo pra voce!\n.";
	}
	else if ( resposta == 1)
     	{
        	cout <<	"Ta pegando o jeito hein meu jovem!Veremos na proxima fase se consegue se virar... \n";
	    }	
    }
      	while ( resposta != 1 & resposta != 2);
      	
    	do
	{
	cout << "\nFase 3: Uma senhora chega na drogaria com uma receita azul, pra comprar o famoso Rivotril.\n";
	cout << "\nDepois de meia hora conversando sobre os problemas da vida, voce decide vender o remedio para ela ou nao?\n";
    cout << "Responda 1 para sim e 2 para nao.\n";
	cin >> resposta; 
	   
    	if (resposta == 2)
		{
		cout << "Ela te contou a historia de vida dela e tava com a receita correta.Porque vc nao aceitou meu filho?? Vai pra rua. O jogo acabou!\n";
		}  
     	else if ( resposta == 1)
	   {
	   	cout << "Gabaritou heinn. Parece ate que trabalha com isso hein! Vc venceu o jogo, tem mais nada nao.\n";
	   }
}
	   while ( resposta != 1 & resposta != 2);

  	system ("pause");
}

