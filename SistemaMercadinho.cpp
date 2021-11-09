#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> //Biblioteca para usar o Sleep


using namespace std;

	//VARI�VEIS

	int opcao; //Vari�veis do menu
	int opcaoCaixa; float saldoCaixa, varianteCaixa; //Vari�veis do caixa
	
	
	//PROTOTIPAGEM DAS FUN��ES DO CAIXA

	void FcontroleCaixa();
	void FsaldoCaixa();
	void FentradaCaixa();
	void FsaidaCaixa();
	
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
			FcontroleCaixa();
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
	
	void FcontroleCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Ol�, voc� est� no menu de controle de caixa"<<endl
		<<"				Escolha uma das op��es abaixo:"<<endl<<endl;
		
		cout<<"				| 1 | Entrada de caixa"<<endl;
		cout<<"				| 2 | Sa�da de caixa"<<endl;
		cout<<"				| 3 | Saldo do caixa"<<endl;
		cout<<"				| 0 | Voltar ao menu anterior"<<endl<<endl;
		cout<<"				";cin>>opcaoCaixa;cout<<endl;
		
		switch (opcaoCaixa){
			
			case 1:
				FentradaCaixa();
				break;
			case 2:
				FsaidaCaixa();
				break;
			case 3:
				FsaldoCaixa();
				break;
			case 0:
				cout<<"				Voltando ao menu anterior!"<<endl<<endl; Sleep(1500);
				break;
			default:
				cout<<"				A op��o digitada n�o foi reconhecida!"<<endl<<endl; Sleep(2500);
			
		}
		
		system("cls"); //system("clear"); - Para Linux
		
		} while (opcaoCaixa !=0);
	}
	
	void FsaldoCaixa(){
		
		cout<<"				O saldo atual em caixa �: R$ "<<saldoCaixa<<endl; Sleep(2000);
		//system("pause");		
		
	}
	
	void FentradaCaixa(){
		cout<<"				O saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da entrada: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa+varianteCaixa;
		cout<<"				O novo saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	void FsaidaCaixa(){
		cout<<"				O saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da sa�da: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa-varianteCaixa;
		cout<<"				O novo saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	
	
	
	
	
	/////

