#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

	int numero=0, i, total, caso;

	int main(){

	setlocale(LC_ALL,"portuguese");

	/*cout<<"Abertura de caixa!"<<endl<<endl;
	
	cout<<"Informe o valor dos produtos"<<endl;*/
	
		
	while (numero<=10){
		
		cout<<"O valor da vari�vel �: "<<numero<<endl;
		
		//numero = numero+1;
		numero++;		
	}
	
	
	for (i=10;i>=0;i=i-3 /*ou i++ ou i--*/){
		
		cout<<"O valor da vari�vel �: "<<i<<endl;
		
	}
	
	cout<<"Digite o numero que deseja saber a tabuada: "<<endl;
	cin>>numero;
	cout<<endl;
	
	for (i=0;i<=10;i++){
		
		total=i*numero;
		
	cout<<numero<<" X "<<i<<" = "<<total<<endl;
		
	}
	
	cout<<"Digite o numero que deseja saber a tabuada: "<<endl;
	cin>>numero;
	cout<<endl;
	
	i=0;
	
	while (i<=10){
		
		total=i*numero;
		
	cout<<numero<<" X "<<i<<" = "<<total<<endl;
	
	//i=i+1;
	i++;		
	}
	
	//Base do Switch Case
	
	cout<<"Digite um n�mero de um a quatro: ";
	cin>>caso;
	
	switch(caso){
		
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
		defaut: 
			cout<<"A op��o digitada n�o foi reconhecida!"<<endl;		
	}

    system("pause");
	}



