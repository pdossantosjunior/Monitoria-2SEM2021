#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

	int opcao;

	int main(){

	setlocale(LC_ALL,"portuguese");

	do{
		
		cout<<"				Informe uma op��o:"<<endl<<endl;
		cout<<"				| 1 | Entrada de caixa"<<endl;
		cout<<"				| 2 | Entrada de produtos"<<endl;
		cout<<"				| 3 | Balan�o de Estoque"<<endl;
		cout<<"				| 4 | Vendas"<<endl;
		cout<<"				| 0 | Encerrar"<<endl;
		cin>>opcao;
		
		switch(opcao){
		
		case 1:
			cout<<"� um"<<endl;
			break;
		case 2:
			cout<<"� dois"<<endl;
			break;
		case 3:
			cout<<"� tr�s"<<endl;
			break;
		case 4:
			cout<<"� quatro"<<endl;
			break;
		case 0:
			cout<<"At� breve!"<<endl;
			break;
		default: 
			cout<<"A op��o digitada n�o foi reconhecida!"<<endl<<endl;		
		}
		
				
	} while (opcao != 0);
		
	

    system("pause");
	}
