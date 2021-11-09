#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> //Biblioteca para usar o Sleep


using namespace std;

	//VARIÁVEIS

	int opcao, opcaoCCaixa;
	
	//PROTOTIPAGEM DAS FUNÇÕES

	void ControleCaixa();
	
	
	
	//FUNÇÃO PRINCIPAL

	int main(){

	setlocale(LC_ALL,"portuguese");

	do{
		
		cout<<"				Informe uma opção:"<<endl<<endl;
		cout<<"				| 1 | Controle de caixa"<<endl;
		cout<<"				| 2 | Entrada de produtos"<<endl;
		cout<<"				| 3 | Balanço de Estoque"<<endl;
		cout<<"				| 4 | Vendas"<<endl;
		cout<<"				| 0 | Encerrar"<<endl<<endl;
		cout<<"				";cin>>opcao;cout<<endl;
		
		switch(opcao){
		
		case 1:
			ControleCaixa();
			break;
		case 2:
			cout<<"				É dois"<<endl<<endl; Sleep(1000);
			break;
		case 3:
			cout<<"				É três"<<endl<<endl; Sleep(1000);
			break;
		case 4:
			cout<<"				É quatro"<<endl<<endl; Sleep(1000);
			break;
		case 0:
			cout<<"				Até breve!"<<endl<<endl; Sleep(2000);
			break;
		default: 
			cout<<"				A opção digitada não foi reconhecida!"<<endl<<endl; Sleep(3000);		
		}
		
		system("cls"); //system("clear"); - Para Linux
				
	} while (opcao != 0);
		
	

    system("pause");
	}
	
	//FUNÇÃO DE CONTROLE DE CAIXA
	
	void ControleCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Olá, você está no menu de controle de caixa"<<endl
		<<"				Escolha uma das opções abaixo:"<<endl<<endl;
		
		cout<<"				| 1 | Entrada de caixa"<<endl;
		cout<<"				| 2 | Saída de caixa"<<endl;
		cout<<"				| 0 | Encerrar"<<endl<<endl;
		cout<<"				";cin>>opcaoCCaixa;cout<<endl;
		
		system("cls"); //system("clear"); - Para Linux
		
	} while (opcaoCCaixa !=0);
		
		
		
	}
