#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
#define ARROZ 15.89
#define FEIJAO 8.99
#define OLEO 7.59
#define ACUCAR 6.49
#define BATATA 5.09
#define CEBOLA 3.99
#define ALHO 12.99
#define ALFACE 2.99

	int produto, tipo;
	float codMerc, qtdMerc, total0, total1, total2, total3, total4, total5, total6, total7, totalDaCompra, CPFCNPJ;

	int main(){

	setlocale(LC_ALL,"portuguese");

	cout<<"Mercadicadinho da Dona Maria"<<endl;
	cout<<"Avenida: Sete de Setembro, 1578 Bairro Carmo 14807-150"<<endl;
	cout<<"CNPJ 35.689.754/0001-05 IE 181.568.058.111 IM 877.201"<<endl<<endl;
	cout<<"EXTRATO 205458"<<endl;
	cout<<"CUPOM FISCAL ELETRONICO - SAT"<<endl;

	cout<<"Consumidor quer Nota Fiscal Paulista: 1 - Quer NFP | 2 - Não Quer NFP "<<endl;
	cin>>tipo;

	if(tipo == 1){
        cout<<"CPFCNPJ do Consumidor: ";
        cin>>CPFCNPJ;
        cout<<endl;
        cout<<"Detalhe da Venda"<<endl<<endl;

        total0 = ARROZ*3;
        total1 = FEIJAO*2;
        total2 = OLEO*5;
        total3 = ACUCAR*4;
        total4 = BATATA*5;
        total5 = CEBOLA*5;
        total6 = ALHO*2;
        total7 = ALFACE*1;
        totalDaCompra = total0 + total1 + total2 + total3 + total4 + total5 + total6 + total7;

        cout<<"COD 0001 Arroz pct 5kg - R$ 15.89 ========R$ "<<total0<<endl;
        cout<<"COD 0002 Feijão pct 1kg - R$ 8.99 ========R$ "<<total1<<endl;
        cout<<"COD 0003 Oleo 900ml - R$ 7.59 ============R$ "<<total2<<endl;
        cout<<"COD 0004 Açucar pct 1kg - R$ 6.49 ========R$ "<<total3<<endl;
        cout<<"COD 0005 Batata kg - R$ 5.09 =============R$ "<<total4<<endl;
        cout<<"COD 0006 Cebola kg - R$ 3.99 =============R$ "<<total5<<endl;
        cout<<"COD 0007 Alho kg - R$ 12.99 ==============R$ "<<total6<<endl;
        cout<<"COD 0008 Alface unid - R$ 2.99 ===========R$ "<<total7<<endl;
        cout<<endl;

        cout<<"Total Bruto de Itens -  "<<totalDaCompra<<endl;
        cout<<"Total ===============R$ "<<totalDaCompra<<endl;
        cout<<"Dinheiro ============== 205.00"<<endl;
        cout<<"Troco ===============R$ 1.03"<<endl<<endl;

        cout<<"TROCA E DEVOLUÇÃO SOMENTE COM A APRESENTAÇÃO DO CUPOM FISCAL"<<endl;
        cout<<"SAC: 0800 00000001 - TELEFONE: 16 - 33000001"<<endl;
        cout<<"Operador: 001454 - João Carlos Junior"<<endl;
        cout<<"31/10/2021 Loja 1 PVD: 05 COD 393570";

    } else if(tipo == 2){
        cout<<"Consumidor não quer NFP"<<endl<<endl;
        cout<<"Detalhe da Venda"<<endl<<endl;

        total0 = ARROZ*3;
        total1 = FEIJAO*2;
        total2 = OLEO*5;
        total3 = ACUCAR*4;
        total4 = BATATA*5;
        total5 = CEBOLA*5;
        total6 = ALHO*2;
        total7 = ALFACE*1;
        totalDaCompra = total0 + total1 + total2 + total3 + total4 + total5 + total6 + total7;

        cout<<"COD 0001 Arroz pct 5kg - R$ 15.89 ========R$ "<<total0<<endl;
        cout<<"COD 0002 Feijão pct 1kg - R$ 8.99 ========R$ "<<total1<<endl;
        cout<<"COD 0003 Oleo 900ml - R$ 7.59 ============R$ "<<total2<<endl;
        cout<<"COD 0004 Açucar pct 1kg - R$ 6.49 ========R$ "<<total3<<endl;
        cout<<"COD 0005 Batata kg - R$ 5.09 =============R$ "<<total4<<endl;
        cout<<"COD 0006 Cebola kg - R$ 3.99 =============R$ "<<total5<<endl;
        cout<<"COD 0007 Alho kg - R$ 12.99 ==============R$ "<<total6<<endl;
        cout<<"COD 0008 Alface unid - R$ 2.99 ===========R$ "<<total7<<endl;
        cout<<endl;

        cout<<"Total Bruto de Itens -  "<<totalDaCompra<<endl;
        cout<<"Total ===============R$ "<<totalDaCompra<<endl;
        cout<<"Dinheiro ============== 205.00"<<endl;
        cout<<"Troco ===============R$ 1.03"<<endl<<endl;

        cout<<"TROCA E DEVOLUÇÃO SOMENTE COM A APRESENTAÇÃO DO CUPOM FISCAL"<<endl;
        cout<<"SAC: 0800 0000001 - TELEFONE: 16 - 33000001"<<endl;
        cout<<"Operador: 001454 - João Carlos Junior"<<endl;
        cout<<"31/10/2021 Loja 1 PVD: 05 COD 393570";

    } else {
        cout<<"está opção não existe";
    }
    cout<<endl<<endl;



    system("pause");
	}



