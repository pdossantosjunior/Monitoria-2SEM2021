#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> //Biblioteca para usar o Sleep


using namespace std;

	//VARIÁVEIS

	int opcao; //Variáveis do menu
	int opcaoCaixa; float saldoCaixa, varianteCaixa; //Variáveis do caixa
	int opcaoProduto, produtos[10]; //Variáveis de produtos
	
	
	//PROTOTIPAGEM DAS FUNÇÕES DO CAIXA

	void FcontroleCaixa();
	void FsaldoCaixa();
	void FentradaCaixa();
	void FsaidaCaixa();
	
	//PROTOTIPAGEM DAS FUNÇÕES DO ENTRADA DE PRODUTOS
	
	void FentradaProdutos();
	void FentradaDeProdutos();
	void FsaldoProdutos();
	
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
			FcontroleCaixa(); break;
		case 2:
			FentradaProdutos(); break;
		case 3:
			cout<<"				É três"<<endl<<endl; Sleep(1000); break;
		case 4:
			cout<<"				É quatro"<<endl<<endl; Sleep(1000); break;
		case 0:
			cout<<"				Até breve!"<<endl<<endl; Sleep(2000); break;
		default: 
			cout<<"				A opção digitada não foi reconhecida!"<<endl<<endl; Sleep(3000);		
		}
		
		system("cls"); //system("clear"); - Para Linux
				
	} while (opcao != 0);
		
	

    //system("pause");
	}
	
	//FUNÇÃO DE CONTROLE DE CAIXA
	
	void FcontroleCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Olá, você está no menu de controle de caixa"<<endl   
		<<"				Escolha uma das opções abaixo:"<<endl<<endl;
				
		cout<<"				| 1 | Entrada de caixa"<<endl;
		cout<<"				| 2 | Saída de caixa"<<endl;
		cout<<"				| 3 | Saldo do caixa"<<endl;
		cout<<"				| 0 | Voltar ao menu anterior"<<endl<<endl;
		cout<<"				";cin>>opcaoCaixa;cout<<endl;
		
		switch (opcaoCaixa){
			
			case 1:
				FentradaCaixa(); break;
			case 2:
				FsaidaCaixa(); break;
			case 3:
				FsaldoCaixa(); break;
			case 0:
				cout<<"				Voltando ao menu anterior!"<<endl<<endl; Sleep(1500); break;
			default:
				cout<<"				A opção digitada não foi reconhecida!"<<endl<<endl; Sleep(2500);
			
		}
		
		system("cls"); //system("clear"); - Para Linux
		
		} while (opcaoCaixa !=0);
	}
	
	void FsaldoCaixa(){
		
		cout<<"				O saldo atual em caixa é: R$ "<<saldoCaixa<<endl; Sleep(2000);
		//system("pause");		
		
	}
	
	void FentradaCaixa(){
		cout<<"				O saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da entrada: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa+varianteCaixa;
		cout<<"				O novo saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	void FsaidaCaixa(){
		cout<<"				O saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da saída: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa-varianteCaixa;
		cout<<"				O novo saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	//FUNÇÃO DE ENTRADA DE PRODUTOS
	
	void FentradaProdutos(){
		
	system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Olá, você está no menu de entrada de produtos"<<endl
		<<"				Escolha uma das opções abaixo:"<<endl<<endl;
		
		cout<<"				| 1 | Entrada de produto"<<endl;
		cout<<"				| 2 | Saída de produto"<<endl;
		cout<<"				| 3 | Saldo de produtos em estoque"<<endl;
		cout<<"				| 0 | Voltar ao menu anterior"<<endl<<endl;
		cout<<"				";cin>>opcaoProduto;cout<<endl;
		
		switch (opcaoProduto){
			
			case 1:
				FentradaDeProdutos(); break;
			case 2:
				FsaidaCaixa(); break;
			case 3:
				FsaldoProdutos(); break;
			case 0:
				cout<<"				Voltando ao menu anterior!"<<endl<<endl; Sleep(1500); break;
			default:
				cout<<"				A opção digitada não foi reconhecida!"<<endl<<endl; Sleep(2500);
			
		}
		
		system("cls"); //system("clear"); - Para Linux
		
		} while (opcaoProduto != 0);
		
		
	}
	
	void FentradaDeProdutos(){
		
		system("cls"); //system("clear"); - Para Linux
		
		FsaldoProdutos();Sleep(3000);
		
		/*cout<<"				O saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da entrada: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa+varianteCaixa;
		cout<<"				O novo saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);*/	
		
		
		

		
	}
	
	void FsaldoProdutos(){
		
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				COD 0001 Arroz pct 5kg ========= "<<produtos[0]<<endl;
        cout<<"				COD 0002 Feijão pct 1kg ======== "<<produtos[1]<<endl;
        cout<<"				COD 0003 Óleo 900ml ============ "<<produtos[2]<<endl;
        cout<<"				COD 0004 Açucar pct 1kg ======== "<<produtos[3]<<endl;
        cout<<"				COD 0005 Batata kg ============= "<<produtos[4]<<endl;
        cout<<"				COD 0006 Cebola kg ============= "<<produtos[5]<<endl;
        cout<<"				COD 0007 Alho kg =============== "<<produtos[6]<<endl;
        cout<<"				COD 0008 Alface unid =========== "<<produtos[7]<<endl<<endl;
		cout<<"				";system("pause");
			
		
		
	}
		
	
	/////

