#include <iostream>
#include <stdlib.h>
#include <locale.h>
//#include <windows.h> //Biblioteca para usar o Sleep
//#include<time.h> //Biblioteca para imprimir a data

using namespace std;

	//VARIÁVEIS

	int valor;
	
	//PROTOTIPAGEM DA FUNÇÃO

	void funcTabuada(int numero);
	
	//FUNÇÃO PRINCIPAL

	int main(){
		
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Informe um número para saber sua tabuada: "; cin>>valor; cout<<endl;
	
	funcTabuada(valor);
	
	}
	
	
	void funcTabuada(int numero){
		
		int i, total;
		
		for(i=0;i<=10;i++){
			
			total=numero*i;
			
			cout<<numero<<" x "<<i<<" = "<<total<<endl;	
					
		}
		
	}
