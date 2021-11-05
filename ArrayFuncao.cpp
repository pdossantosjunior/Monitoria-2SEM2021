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
	
	
		for (i=0;i<=10;i++){
		
		cout<<"O valor de i é: "<<i<<endl;
					
		cout<<"O valor armazenado no array é: "<<ValorArray(array, i)<<endl;			
	}
	
	return 0;
	//system("pause");
	}
	
	int ValorArray(int array[], int i){
		
		conta=conta+3;
		array[i]=conta;	
		
	}



