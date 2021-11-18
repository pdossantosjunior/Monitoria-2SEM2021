#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> //Biblioteca para usar o Sleep
//#include <string> //Biblioteca String


using namespace std;

	//VARIÁVEIS

	int opcao; //Variáveis do menu
	int opcaoCaixa; float saldoCaixa, varianteCaixa; //Variáveis do caixa
	int opcaoProduto, quantProdutos[8], saidaProduto;  //Variáveis de produtos
	
	
	//PROTOTIPAGEM DAS FUNÇÕES DO CAIXA

	void FcontroleCaixa();
	void FsaldoCaixa();
	void FentradaCaixa();
	void FsaidaCaixa();
	
	//PROTOTIPAGEM DAS FUNÇÕES DO ENTRADA DE PRODUTOS
	
	void FbalancoEstoque();
	void FentradaProduto();
	void FsaldoProduto();
	void FsaidaProduto();
	
	//FUNÇÃO PRINCIPAL

	int main(){

	setlocale(LC_ALL,"portuguese");

	do{
		
		cout<<"				Informe uma opção:"<<endl<<endl;
		cout<<"				| 1 | Controle de caixa"<<endl;
		cout<<"				| 2 | Balanço de Estoque"<<endl;
		cout<<"				| 3 | Vendas"<<endl;
		cout<<"				| 0 | Encerrar"<<endl<<endl;
		cout<<"				";cin>>opcao;cout<<endl;
		
		switch(opcao){
		
		case 1:
			FcontroleCaixa(); break;
		case 2:
			FbalancoEstoque(); break;
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
		<<"				Informe uma opção:"<<endl<<endl;
				
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
		
		//system("cls"); //system("clear"); - Para Linux
		
		cout<<"				O saldo atual em caixa é: R$ "<<saldoCaixa<<endl; Sleep(2000);
		//system("pause");		
		
	}
	
	void FentradaCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				O saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da entrada: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa+varianteCaixa;
		cout<<"				O novo saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	void FsaidaCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				O saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da saída: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa-varianteCaixa;
		cout<<"				O novo saldo atual em caixa é: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	//FUNÇÃO DE ENTRADA DE PRODUTOS
	
	void FbalancoEstoque(){
		
	system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Olá, você está no menu de balanço de estoque"<<endl
		<<"				Informe uma opção:"<<endl<<endl;
		
		cout<<"				| 1 | Entrada de produto"<<endl;
		cout<<"				| 2 | Saída de produto"<<endl;
		cout<<"				| 3 | Saldo de produtos em estoque"<<endl;
		cout<<"				| 0 | Voltar ao menu anterior"<<endl<<endl;
		cout<<"				";cin>>opcaoProduto;cout<<endl;
		
		switch (opcaoProduto){
			
			case 1:
				FentradaProduto(); break;
			case 2:
				FsaidaProduto(); break;
			case 3:
				FsaldoProduto(); break;
			case 0:
				cout<<"				Voltando ao menu anterior!"<<endl<<endl; Sleep(1500); break;
			default:
				cout<<"				A opção digitada não foi reconhecida!"<<endl<<endl; Sleep(2500);
			
		}
		
		system("cls"); //system("clear"); - Para Linux
		
		} while (opcaoProduto != 0);
		
		
	}
	
	void FentradaProduto(){
				
		system("cls"); //system("clear"); - Para Linux
		
		//FsaldoProdutos();Sleep(3000);
		
		cout<<"				Produtos - Cadastro"<<endl<<endl;
		cout<<"				Informe a quantidade de produtos: "<<endl<<endl;
		
		cout<<"				COD 0001 Arroz pct 5kg ========= "; cin>>quantProdutos[0];
        cout<<"				COD 0002 Feijão pct 1kg ======== "; cin>>quantProdutos[1];
        cout<<"				COD 0003 Óleo 900ml ============ "; cin>>quantProdutos[2];
        cout<<"				COD 0004 Açucar pct 1kg ======== "; cin>>quantProdutos[3];
        cout<<"				COD 0005 Batata kg ============= "; cin>>quantProdutos[4];
        cout<<"				COD 0006 Cebola kg ============= "; cin>>quantProdutos[5];
        cout<<"				COD 0007 Alho kg =============== "; cin>>quantProdutos[6];
        cout<<"				COD 0008 Alface unid =========== "; cin>>quantProdutos[7];
		
		FsaldoProduto();

				
	}
	
	void FsaldoProduto(){
		
		system("cls"); //system("clear"); - Para Linux	
		
		cout<<"				Produtos - Saldo"<<endl<<endl;
		
		cout<<"				COD 0001 Arroz pct 5kg ========= "<<quantProdutos[0]<<endl;
        cout<<"				COD 0002 Feijão pct 1kg ======== "<<quantProdutos[1]<<endl;
        cout<<"				COD 0003 Óleo 900ml ============ "<<quantProdutos[2]<<endl;
        cout<<"				COD 0004 Açucar pct 1kg ======== "<<quantProdutos[3]<<endl;
        cout<<"				COD 0005 Batata kg ============= "<<quantProdutos[4]<<endl;
        cout<<"				COD 0006 Cebola kg ============= "<<quantProdutos[5]<<endl;
        cout<<"				COD 0007 Alho kg =============== "<<quantProdutos[6]<<endl;
        cout<<"				COD 0008 Alface unid =========== "<<quantProdutos[7]<<endl<<endl;
        cout<<"				";system("pause");
					
	}
	
	void FsaidaProduto(){
		
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				Produtos - Saída"<<endl<<endl;
		cout<<"				Informe a quantidade da retirada de produtos: "<<endl<<endl;
		   
        cout<<"				COD 0001 Arroz pct 5kg ========= ";cin>>saidaProduto;quantProdutos[0]=quantProdutos[0]-saidaProduto;
		cout<<"				COD 0002 Feijão pct 1kg ======== ";cin>>saidaProduto;quantProdutos[1]=quantProdutos[1]-saidaProduto;
        cout<<"				COD 0003 Óleo 900ml ============ ";cin>>saidaProduto;quantProdutos[2]=quantProdutos[2]-saidaProduto;
        cout<<"				COD 0004 Açucar pct 1kg ======== ";cin>>saidaProduto;quantProdutos[3]=quantProdutos[3]-saidaProduto;
        cout<<"				COD 0005 Batata kg ============= ";cin>>saidaProduto;quantProdutos[4]=quantProdutos[4]-saidaProduto;
        cout<<"				COD 0006 Cebola kg ============= ";cin>>saidaProduto;quantProdutos[5]=quantProdutos[5]-saidaProduto;
        cout<<"				COD 0007 Alho kg =============== ";cin>>saidaProduto;quantProdutos[6]=quantProdutos[6]-saidaProduto;
        cout<<"				COD 0008 Alface unid =========== ";cin>>saidaProduto;quantProdutos[7]=quantProdutos[7]-saidaProduto;
		
		FsaldoProduto();		
	}
		
	
	/////Fim do programa

