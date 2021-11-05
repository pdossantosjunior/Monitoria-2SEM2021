#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

	/*
	int array[]={0,1,2,3,4,5,6}
	int array[1][2]; linha/coluna - lembrando que começam em zero ---> array[0][0]
	
	  0   1   2   3   4 
	|	|	|	|	|	| 0
	|	|	|	|	|	| 1
	|	|	|	|	|	| 2
	|	|	|	|	|	| 3

	*/

	int array[10];
	int conta=0, i;
	
	int ValorArray(int valor[], int count); //Prototipação da função

	int main(){

	setlocale(LC_ALL,"portuguese");

	/*for (i=0;i<=10;i++){
		
		cout<<"O valor de i é: "<<i<<endl;
		
		conta=conta+3;
		array[i]=conta;	
						
	}
	
		for (i=0;i<=10;i++){
		
		cout<<"O valor de i é: "<<i<<" o número do array é: "<<array[i]<<endl;		
	}*/	
	
	//Laço de repetição com função e vetor(array)
	
	/*	for (i=0;i<=10;i++){
		
		cout<<"O valor de i é: "<<i;
		ValorArray(array, i);
			
					
	}*/
	
	return 0;
	//system("pause");
	}
	
	//Função para imprimir o valor do array
	int ValorArray(int valor[], int count){
		
		conta=conta+3;
		array[i]=conta;
		
		cout<<" O valor armazenado no array é: "<<valor[count]<<endl;	
		
	}



