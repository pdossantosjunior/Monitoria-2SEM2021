#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> //Biblioteca para usar o Sleep
//#include <string> //Biblioteca String


using namespace std;

	//VARI�VEIS

	int opcao; //Vari�veis do menu
	int opcaoCaixa; float saldoCaixa, varianteCaixa; //Vari�veis do caixa
	int opcaoProduto, quantProdutos[8], saidaProduto;  //Vari�veis de produtos
	float precoProdutos[8]; //Vari�veis de produtos
	int opcaocpf, cpfCNPJ; //Vari�veis de vendas
	
	
	//PROTOTIPAGEM DAS FUN��ES DO CAIXA

	void FcontroleCaixa();
	void FsaldoCaixa();
	void FentradaCaixa();
	void FsaidaCaixa();
	
	//PROTOTIPAGEM DAS FUN��ES DO ENTRADA DE PRODUTOS
	
	void FbalancoEstoque();
	void FentradaProduto();
	void FsaldoProduto();
	void FsaidaProduto();
	void FlancamentoPrecos();
	void FtabelaPrecos();
	
	//PROTOTIPAGEM DAS FUN��ES DE VENDAS
	
	void FopcaoCPF();
	void FsemCPF();
	void FcomCPF();
	
	//FUN��O PRINCIPAL

	int main(){

	setlocale(LC_ALL,"portuguese");
	
	system("cls"); //system("clear"); - Para Linux

	do{
		
		cout<<"				Informe uma op��o:"<<endl<<endl;
		
		cout<<"				| 1 | Controle de caixa"<<endl;
		cout<<"				| 2 | Balan�o de Estoque"<<endl;
		cout<<"				| 3 | Vendas"<<endl;
		cout<<"				| 0 | Encerrar"<<endl<<endl;
		cout<<"				";cin>>opcao;cout<<endl;
		
		switch(opcao){
		
		case 1:
			FcontroleCaixa(); break;
		case 2:
			FbalancoEstoque(); break;
		case 3:
			FopcaoCPF(); break;
		case 0:
			cout<<"				At� breve!"<<endl<<endl; Sleep(2000); break;
		default: 
			cout<<"				A op��o digitada n�o foi reconhecida!"<<endl<<endl; Sleep(3000);		
		}
		
		system("cls"); //system("clear"); - Para Linux
				
	} while (opcao != 0);	

    //system("pause");
	}
	
	//FUN��ES DE CONTROLE DE CAIXA
	
	void FcontroleCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Ol�, voc� est� no menu de controle de caixa"<<endl   
		<<"				Informe uma op��o:"<<endl<<endl;
				
		cout<<"				| 1 | Entrada de caixa"<<endl;
		cout<<"				| 2 | Sa�da de caixa"<<endl;
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
				cout<<"				Voltando ao menu anterior!"<<endl<<endl; Sleep(1500); main(); break;
			default:
				cout<<"				A op��o digitada n�o foi reconhecida!"<<endl<<endl; Sleep(2500);
			
		}
		
		system("cls"); //system("clear"); - Para Linux
		
		} while (opcaoCaixa !=0);
	}
	
	void FsaldoCaixa(){
		
		//system("cls"); //system("clear"); - Para Linux
		
		cout<<"				O saldo atual em caixa �: R$ "<<saldoCaixa<<endl; Sleep(2000);
		//system("pause");		
		
	}
	
	void FentradaCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				O saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da entrada: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa+varianteCaixa;
		cout<<"				O novo saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	void FsaidaCaixa(){
		
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				O saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;
		cout<<"				Informe o valor da sa�da: R$ ";
		cin>>varianteCaixa; cout<<endl<<endl;
		saldoCaixa=saldoCaixa-varianteCaixa;
		cout<<"				O novo saldo atual em caixa �: R$ "<<saldoCaixa<<endl<<endl;Sleep(2500);		
	}
	
	//FUN��ES DE ENTRADA DE PRODUTOS
	
	void FbalancoEstoque(){
		
	system("cls"); //system("clear"); - Para Linux
		
		do{ 
		
		cout<<"				Ol�, voc� est� no menu de balan�o de estoque"<<endl
		<<"				Informe uma op��o:"<<endl<<endl;
		
		cout<<"				| 1 | Entrada de produto"<<endl;
		cout<<"				| 2 | Sa�da de produto"<<endl;
		cout<<"				| 3 | Saldo de produtos em estoque"<<endl;
		cout<<"				| 4 | Lan�amento de pre�os"<<endl;
		cout<<"				| 5 | Tabela de pre�os"<<endl;
		cout<<"				| 0 | Voltar ao menu anterior"<<endl<<endl;
		cout<<"				";cin>>opcaoProduto;cout<<endl;
		
		switch (opcaoProduto){
			
			case 1:
				FentradaProduto(); break;
			case 2:
				FsaidaProduto(); break;
			case 3:
				FsaldoProduto(); break;
			case 4:
				FlancamentoPrecos(); break;
			case 5:
				FtabelaPrecos(); break;
			case 0:
				cout<<"				Voltando ao menu anterior!"<<endl<<endl; Sleep(1500); main(); break;
			default:
				cout<<"				A op��o digitada n�o foi reconhecida!"<<endl<<endl; Sleep(2500);
			
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
        cout<<"				COD 0002 Feij�o pct 1kg ======== "; cin>>quantProdutos[1];
        cout<<"				COD 0003 �leo 900ml ============ "; cin>>quantProdutos[2];
        cout<<"				COD 0004 A�ucar pct 1kg ======== "; cin>>quantProdutos[3];
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
        cout<<"				COD 0002 Feij�o pct 1kg ======== "<<quantProdutos[1]<<endl;
        cout<<"				COD 0003 �leo 900ml ============ "<<quantProdutos[2]<<endl;
        cout<<"				COD 0004 A�ucar pct 1kg ======== "<<quantProdutos[3]<<endl;
        cout<<"				COD 0005 Batata kg ============= "<<quantProdutos[4]<<endl;
        cout<<"				COD 0006 Cebola kg ============= "<<quantProdutos[5]<<endl;
        cout<<"				COD 0007 Alho kg =============== "<<quantProdutos[6]<<endl;
        cout<<"				COD 0008 Alface unid =========== "<<quantProdutos[7]<<endl<<endl;
        cout<<"				";system("pause");			
	}
	
	void FsaidaProduto(){
		
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				Produtos - Sa�da"<<endl;
		cout<<"				Informe a quantidade da retirada de produtos: "<<endl<<endl;
		   
        cout<<"				COD 0001 Arroz pct 5kg ========= ";cin>>saidaProduto;quantProdutos[0]=quantProdutos[0]-saidaProduto;
		cout<<"				COD 0002 Feij�o pct 1kg ======== ";cin>>saidaProduto;quantProdutos[1]=quantProdutos[1]-saidaProduto;
        cout<<"				COD 0003 �leo 900ml ============ ";cin>>saidaProduto;quantProdutos[2]=quantProdutos[2]-saidaProduto;
        cout<<"				COD 0004 A�ucar pct 1kg ======== ";cin>>saidaProduto;quantProdutos[3]=quantProdutos[3]-saidaProduto;
        cout<<"				COD 0005 Batata kg ============= ";cin>>saidaProduto;quantProdutos[4]=quantProdutos[4]-saidaProduto;
        cout<<"				COD 0006 Cebola kg ============= ";cin>>saidaProduto;quantProdutos[5]=quantProdutos[5]-saidaProduto;
        cout<<"				COD 0007 Alho kg =============== ";cin>>saidaProduto;quantProdutos[6]=quantProdutos[6]-saidaProduto;
        cout<<"				COD 0008 Alface unid =========== ";cin>>saidaProduto;quantProdutos[7]=quantProdutos[7]-saidaProduto;
		
		FsaldoProduto();		
	}
	
	void FlancamentoPrecos(){
				
		system("cls"); //system("clear"); - Para Linux
		
		cout<<"				Produtos - Lan�amento de pre�os"<<endl;
		cout<<"				Informe o pre�o dos produtos: "<<endl<<endl;
		
		cout<<"				Obs.: Use '.' no lugar de ',' ."<<endl<<endl;
		   
        cout<<"				COD 0001 Arroz pct 5kg ========= R$ ";cin>>precoProdutos[0];
		cout<<"				COD 0002 Feij�o pct 1kg ======== R$ ";cin>>precoProdutos[1];
        cout<<"				COD 0003 �leo 900ml ============ R$ ";cin>>precoProdutos[2];
        cout<<"				COD 0004 A�ucar pct 1kg ======== R$ ";cin>>precoProdutos[3];
        cout<<"				COD 0005 Batata kg ============= R$ ";cin>>precoProdutos[4];
        cout<<"				COD 0006 Cebola kg ============= R$ ";cin>>precoProdutos[5];
        cout<<"				COD 0007 Alho kg =============== R$ ";cin>>precoProdutos[6];
        cout<<"				COD 0008 Alface unid =========== R$ ";cin>>precoProdutos[7];cout<<endl;
        
        cout<<"				";system("pause"); system("cls"); //system("clear"); - Para Linux
        
        FtabelaPrecos();
	}
        
        
    void FtabelaPrecos(){
    	
    	system("cls"); //system("clear"); - Para Linux
        
        cout<<"				Produtos - Tabela de pre�os"<<endl;
		cout<<"				Pre�o dos produtos: "<<endl<<endl;
		   
        cout<<"				COD 0001 Arroz pct 5kg ========= R$ ";printf("%5.2f",precoProdutos[0]);cout<<endl;  //O printf est� tratando a impress�o do valor 
		cout<<"				COD 0002 Feij�o pct 1kg ======== R$ ";printf("%5.2f",precoProdutos[1]);cout<<endl;  //para que a impress�o sa�a de forma correta
        cout<<"				COD 0003 �leo 900ml ============ R$ ";printf("%5.2f",precoProdutos[2]);cout<<endl;	//ao inv�s de sair 5, sair� 5,00
        cout<<"				COD 0004 A�ucar pct 1kg ======== R$ ";printf("%5.2f",precoProdutos[3]);cout<<endl;	//o 5.2 � 5 de cinco algarismos ao total e o dois
        cout<<"				COD 0005 Batata kg ============= R$ ";printf("%5.2f",precoProdutos[4]);cout<<endl;	//� a quantidade de algarismos depois da v�rgula 
        cout<<"				COD 0006 Cebola kg ============= R$ ";printf("%5.2f",precoProdutos[5]);cout<<endl;
        cout<<"				COD 0007 Alho kg =============== R$ ";printf("%5.2f",precoProdutos[6]);cout<<endl;
        cout<<"				COD 0008 Alface unid =========== R$ ";printf("%5.2f",precoProdutos[7]);cout<<endl<<endl;
        		
		cout<<"				";system("pause"); system("cls"); //system("clear"); - Para Linux        
	}
	
	//FUN��ES DE VENDAS
	
	void FopcaoCPF(){
		
		system("cls"); //system("clear"); - Para Linux
		
		do{
			
		cout<<"				Ol�, voc� est� no menu de CPF"<<endl   
		<<"				Informe uma op��o:"<<endl<<endl;
		
		cout<<"				| 1 | Nota com CPF/CNPJ"<<endl;
		cout<<"				| 2 | Nota sem CPF/CNPJ"<<endl;	
		cout<<"				| 0 | Voltar ao menu anterior"<<endl<<endl;
		cout<<"				";cin>>opcaocpf;cout<<endl;
		
		switch(opcaocpf){
		
		case 1:
			FcomCPF(); break;
		case 2:
			FsemCPF(); break;
		case 0:
			cout<<"				Voltando ao menu anterior!"<<endl<<endl; Sleep(1500); main(); break;
		default: 
			cout<<"				A op��o digitada n�o foi reconhecida!"<<endl<<endl; Sleep(2500);		
		}
		
		system("cls"); //system("clear"); - Para Linux
				
	} while (opcao != 0);			
	}
	
	void FsemCPF(){
	
	
	
	}
	
	void FcomCPF(){
		
		cout<<"				Informe o CPF ou o CNPJ do cliente, para a nota fiscal: "<<endl;
		cin>>cpfCNPJ;
		
		
	}	
	
	
	
	
	/////Fim do programa
