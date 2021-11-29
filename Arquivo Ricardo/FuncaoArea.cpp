#include<iostream>
using namespace std;

float AreaTerreno(float lado1, float lado2, float lado3, float lado4)
{
 //float Area;//variável local
 //Area=lado1*lado2*lado3*lado4;
 return(lado1*lado2*lado3*lado4);
}

int main()
{
 float l1,l2,l3,l4;//Ar;
 
 cout<<"Lado 1 = "; cin>>l1;
 cout<<"Lado 2 = "; cin>>l2;
 cout<<"Lado 3 = "; cin>>l3;
 cout<<"Lado 4 = "; cin>>l4;
 
 cout<<"Area = "<<AreaTerreno(l4,l3,l2,l1);
 
 
 
 /*
 	
 Ar= AreaTerreno(l1,l2);//passo 2 valores( 2 parâmetros) para a função	

 cout<<"Area="<<Ar;	*/
  
}
