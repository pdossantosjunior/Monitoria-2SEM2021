#include<iostream>  
#include<stdlib.h>  
#include<locale.h>

using namespace std;
	
	float producao=5;
	int i;
	
	int main()
	
{		
	setlocale(LC_ALL,"portuguese");
	
	for(i=0;producao<=10;i++){
		
		producao=producao*1.1;
	}
		
	cout<<i<<endl; //anos 
	cout<<producao; // teste para saber a produção
		
}
