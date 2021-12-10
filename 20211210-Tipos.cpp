#include <iostream>
#include <locale.h>
using namespace std;



int tipoProduto, i;
float valorProduto=0, tipoLimpeza=0, tipoAlimento=0, tipoBebida=0, gastoTotal=0;



void operacoesProdutos();
void funcFinal();



int main(){



setlocale(LC_ALL,"portuguese");



for(i=0;i<=8;i++){
cout<<"Informe tipo de produto: "<<endl;
cout<<"1 - Limpeza | 2 - Alimentos | 3 - Bebidas"<<endl;
cin>>tipoProduto;



switch(tipoProduto){
case 1:
cout<<"Informe o valor do produto: R$ "; cin>>valorProduto; cout<<endl; operacoesProdutos(); break;
case 2:
cout<<"Informe o valor do produto: R$ "; cin>>valorProduto; cout<<endl; operacoesProdutos(); break;
case 3:
cout<<"Informe o valor do produto: R$ "; cin>>valorProduto; cout<<endl; operacoesProdutos(); break;
default:
cout<<"A opção digitada não é valída"<<endl; i--;
}
}



funcFinal();



}



void operacoesProdutos(){
if(tipoProduto == 1){
tipoLimpeza = tipoLimpeza + valorProduto;
}
else if(tipoProduto == 2){
tipoAlimento = tipoAlimento + valorProduto;
}
else if(tipoProduto == 3){
tipoBebida = tipoBebida + valorProduto;
}
}



void funcFinal(){
gastoTotal=tipoAlimento+tipoBebida+tipoLimpeza;



cout<<"Foi gasto com limpeza R$ "<<tipoLimpeza<<endl;
cout<<"Foi gasto com Beida R$ "<<tipoBebida<<endl;
cout<<"Foi gasto com Alimentos R$ "<<tipoAlimento<<endl<<endl;



cout<<"O gasto Total foi de R$ "<<gastoTotal<<endl<<endl;



if(tipoAlimento >= tipoBebida && tipoAlimento >= tipoLimpeza){
cout<<"O tipo de produto que teve maior gasto, foram os Alimentos"<<endl;
}



else if(tipoBebida >= tipoAlimento && tipoBebida >= tipoLimpeza){
cout<<"O tipo de produto que teve maior gasto, foram as Bebidas"<<endl;
}


else if(tipoLimpeza >= tipoBebida && tipoLimpeza >= tipoAlimento){
cout<<"O tipo de produto que teve maior gasto, foi a limpeza"<<endl;
}
}
