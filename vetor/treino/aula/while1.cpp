#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	float nota,nota2, s;
	int i =0, n;
	string nome;
	
	cout<<"digite o N: ";
	cin>>n;
	
	while(i <= n){
		cout<<"digite o Nome: ";
		cin>>nome;
		cout<<"digite o Nota: ";
		cin>>nota;
		cout<<"digite o Nota2: ";
		cin>>nota2;
		s = nota + nota2;
		i++;
	cout<<"A soma é: " <<s <<endl;
	cout<<"A media é: " <<(s/2) <<endl;
	
	if (s/2 >=6){
		cout<<"Aluno aprovado: " <<nome <<s/2 <<endl;
	}
	if (s/2 >= 3){
		cout<<"Aluno de recuperação: " <<nome <<s/2 <<endl;
	}
	else{
		cout<<"Aluno reprovado: " <<nome <<s/2 <<endl;
	}
	}
	
	
}
