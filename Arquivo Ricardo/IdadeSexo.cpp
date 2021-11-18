/*Foi feita uma pesquisa com 5 habitantes de Araraquara que tiveram
Dengue. Foram coletados os dados de idade e o sexo(M/F). Faça
um programa que calcule e mostre:
a) A quantidade de mulheres e de homens;
b) A pessoa mais nova e a pessoa mais velha e o sexo delas.*/
#include <iostream>
using namespace std;

int sexo; //1 - F, 2 - M
int idade, cont = 1, totalFem = 0, totalMasc = 0 ;
int nova=1000, velha=0, sexoNova, sexoVelha;

	int main(){

		while(cont <=5){

		cout<<"Idade:";
		cin>>idade;

		cout<<"Sexo(1-F, 2-M):";
		cin>>sexo;
		
		//Contagem dos sexos

		if(sexo == 1){
			totalFem++;
		} else {
			totalMasc++;
		}
	
		//Mais novo ou velho
		
		if(idade<=nova){
			nova = idade;
			sexoNova=sexo;
		} 
		else if (idade>=velha){
			velha = idade;
			sexoVelha=sexo;				
		}
		cont++;

	}

	cout<<"Total de Mulheres = "<<totalFem<<endl;
	cout<<"Total de Homens = "<<totalMasc<<endl;
	
	//Impressão dos sexos
	
	if(sexoNova==1){
		cout<<"A pessoa mais nova é uma mulher e tem "<<nova<<" anos."<<endl;
	} else {
		cout<<"A pessoa mais nova é um homem e tem "<<nova<<" anos."<<endl;
	}
	
	if(sexoVelha==1){
		cout<<"A pessoa mais velha é uma mulher e tem "<<velha<<" anos."<<endl;
	} else {
		cout<<"A pessoa mais velha é um homem e tem "<<velha<<" anos."<<endl;
	}

}
