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
	int valor1, valor2, total;
	
	int FuncaoDoisValores(int v1, int v2); // Prototipação da função com dois valores
	void ValorArray(int valor[], int count); //Prototipação da função com array

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
	
	
	
	
	valor1 = 30;
	valor2 = 40;
	
	//FuncaoDoisValores(valor1,valor2);
	
	cout<<"A soma dos valores é: "<<FuncaoDoisValores(valor1,valor2)<<endl;
		
	
	//Laço de repetição com função e vetor(array)
	
	/*for (i=0;i<=10;i++){
		
		cout<<"O valor de i é: "<<i;
		ValorArray(array, i);
			
					
	}*/
	
	return 0;
	//system("pause");
	}
	
	//Função para receber e devolver dois valores
	int FuncaoDoisValores(int v1, int v2){
		
		v1=v2;
		v2=v1+v2;
		total=v1+v2;
		
		cout<<"O valor do primeiro número é: "<<v1<<endl;
		cout<<"O valor do segundo número e: "<<v2<<endl;	
		
		return total;
	}
	
	
	
	//Função para imprimir o valor do array
	void ValorArray(int valor[], int count){
		
		conta=conta+3;
		array[i]=conta;
		
		cout<<" O valor armazenado no array é: "<<valor[count]<<endl;	
		
	}



