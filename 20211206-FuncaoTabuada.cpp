#include <iostream>
#include <stdlib.h>
#include <locale.h>
//#include <windows.h> //Biblioteca para usar o Sleep
//#include<time.h> //Biblioteca para imprimir a data

using namespace std;

	//VARI�VEIS

	int valor;
	
	//PROTOTIPAGEM DA FUN��O

	void funcTabuada(int numero);
	
	//FUN��O PRINCIPAL

	int main(){
		
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Informe um n�mero para saber sua tabuada: "; cin>>valor; cout<<endl;
	
	funcTabuada(valor);
	
	}
	
	
	void funcTabuada(int numero){
		
		int i, total;
		
		for(i=0;i<=10;i++){
			
			total=numero*i;
			
			cout<<numero<<" x "<<i<<" = "<<total<<endl;	
					
		}
		
	}
