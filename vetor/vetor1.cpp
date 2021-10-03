#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de um vetor (variavel composta homogenea - unidimensional)
	int numero[5];
	
	//atribuição
	numero[0] = 7;
	numero[3] = numero[0] * 5;
	
	//Entrada de dados
	cout<<"Digite um valor: ";
	cin>>numero[1];
	
	//Saída de dados
	cout<<numero[0]<<" "<<numero[1]<<" "<<numero[2]<<" "<<numero[3]<<" "<<numero[4];
	
	
}
