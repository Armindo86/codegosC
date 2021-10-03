/*Fazer um programa para ler o nome de 5 pessoas e suas idades.
Após a entrada de dados, apresente o nome e a idade de todas as pessoas.
*/
#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int idade[5], i;
	string nome[5];
	
	for(i = 0; i < 5; i++){
		cout<<"nome: ";
		cin>>nome[i];
		cout<<"Idade: ";
		cin>>idade[i];
	}
	for(i = 0; i < 5; i++){
		cout<<nome[i]<<idade[i]<<endl;
	}
}
