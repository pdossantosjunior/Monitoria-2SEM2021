#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

	int opcao;

	int main(){

	setlocale(LC_ALL,"portuguese");

	do{
		
		cout<<"				Informe uma opção:"<<endl<<endl;
		cout<<"				| 1 | Entrada de caixa"<<endl;
		cout<<"				| 2 | Entrada de produtos"<<endl;
		cout<<"				| 3 | Balanço de Estoque"<<endl;
		cout<<"				| 4 | Vendas"<<endl;
		cout<<"				| 0 | Encerrar"<<endl;
		cin>>opcao;
		
		switch(opcao){
		
		case 1:
			cout<<"É um"<<endl;
			break;
		case 2:
			cout<<"É dois"<<endl;
			break;
		case 3:
			cout<<"É três"<<endl;
			break;
		case 4:
			cout<<"É quatro"<<endl;
			break;
		case 0:
			cout<<"Até breve!"<<endl;
			break;
		default: 
			cout<<"A opção digitada não foi reconhecida!"<<endl<<endl;		
		}
		
				
	} while (opcao != 0);
		
	

    system("pause");
	}
