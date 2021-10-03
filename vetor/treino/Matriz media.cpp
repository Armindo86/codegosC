/*Faça um programa para ler o nome do aluno e suas duas notas para uma turma de 5 alunos.
Após a entrada dos dados, gere um relatório geral apresentando todos os dados solicitados na entrada. Para isso,
os dados de entrada deverão ser vetores.
Desafio (facultativo): na apresentação do relatório incluir o cálculo da média.*/
#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	float notas[3], soma=0, media = 0;
	int i, j;
	
	for (i = 0; i < 3; i++){
		/*for (j = 0; j < 3; j++){*/
			cout<<"Digite o Aluno:";
			cin>>nome;
			cout<<"Digite Nota: ";
			cin>>notas[3]
			soma = soma + notas[3];
			media = soma/3;
	cout<<media;
	}	
}
