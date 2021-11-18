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
		
		int i,numero; //Declração de variável
		
		cout<<"Digite um número: ";
		cin>>numero;cout<<endl;
		
		for (i=0;i<=10;i++){
			cout<<numero<<" X "<<i<<" = "<<i*numero<<endl;
		}		
		
	}


