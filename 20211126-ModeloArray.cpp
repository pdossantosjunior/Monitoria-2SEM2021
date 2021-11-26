#include <iostream>
#include <stdlib.h>

using namespace std;


	//char colaborador;
	
	void FuncaoMorta();  //Prototipa
	
	//     array[3]        0 1 2
		int colaborador[]={1,2,3};
	

	int main(){
		
		int colaborador[]={6,5,4};	
		
		cout<<colaborador[0]<<endl;
		cout<<colaborador[1]<<endl;
		cout<<colaborador[2]<<endl;

		FuncaoMorta();
	    

	}
	
	
	void FuncaoMorta(){
		
		cout<<colaborador[2]<<endl;
		cout<<colaborador[1]<<endl;
		cout<<colaborador[0]<<endl;
				
		
	}
