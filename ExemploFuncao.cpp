#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

	void Ftabuada(); //Prototipagem
	
	int main(){

	setlocale(LC_ALL,"portuguese");
	
	Ftabuada();
		
	}

	void Ftabuada(){
		
		int i,numero; //Declra��o de vari�vel
		
		cout<<"Digite um n�mero: ";
		cin>>numero;cout<<endl;
		
		for (i=0;i<=10;i++){
			cout<<numero<<" X "<<i<<" = "<<i*numero<<endl;
		}		
		
	}


