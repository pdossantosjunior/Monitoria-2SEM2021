#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> //Biblioteca para usar o Sleep


using namespace std;

	//VARI�VEIS

	int opcao, opcaoCCaixa;
	
	//PROTOTIPAGEM DAS FUN��ES

	void ControleCaixa();
	
	
	
	//FUN��O PRINCIPAL

	int main(){

	setlocale(LC_ALL,"portuguese");

	do{
		
		cout<<"				Informe uma op��o:"<<endl<<endl;
		cout<<"				| 1 | Controle de caixa"<<endl;
		cout<<"				| 2 | Entrada de produtos"<<endl;
		cout<<"				| 3 | Balan�o de Estoque"<<endl;
		cout<<"				| 4 | Vendas"<<endl;
		cout<<"				| 0 | Encerrar"<<endl<<endl;
		cout<<"				";cin>>opcao;cout<<endl;
		
		switch(opcao){
		
		case 1:
			ControleCaixa();
			break;
		case 2:
			cout<<"				� dois"<<endl<<endl; Sleep(1000);
			break;
		case 3:
			cout<<"				� tr�s"<<endl<<endl; Sleep(1000);
			break;
		case 4:
			cout<<"				� quatro"<<endl<<endl; Sleep(1000);
			break;
		case 0:
			cout<<"				At� breve!"<<endl<<endl; Sleep(2000);
			break;
		default: 
			cout<<"				A op��o digitada n�o foi reconhecida!"<<endl<<endl; Sleep(3000);		
		}
		
		system("cls"); //system("clear"); - Para Linux
				
	} while (opcao != 0);
		
	

    system("pause");
	}
	
	//FUN��O DE CONTROLE DE CAIXA
	
	void ControleCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Ol�, voc� est� no menu de controle de caixa"<<endl
		<<"				Escolha uma das op��es abaixo:"<<endl<<endl;
		
		cout<<"				| 1 | Entrada de caixa"<<endl;
		cout<<"				| 2 | Sa�da de caixa"<<endl;
		cout<<"				| 0 | Encerrar"<<endl<<endl;
		cout<<"				";cin>>opcaoCCaixa;cout<<endl;
		
		system("cls"); //system("clear"); - Para Linux
		
	} while (opcaoCCaixa !=0);
		
		
		
	}
