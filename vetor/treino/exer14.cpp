#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, n, totalIsento = 0;
	cout<<"digite o N: ";
	cin>>n;
	
	float salario_b[n], inss[n], ir[n], salario_l[i], 
	totSalarioB[n] = 0;
	string nome[n];
	
	cout<<"=================================="<<endl;
	for (i = 0; i < n; i++){
		cout<<"Digete o nome: ";
		cin>>nome[i];
		cout<<"Digete o salario: ";
		cin>>salario_b[i];
		totSalarioB++;
	}
	for (i = 0; i < n; i++){
		if (salario_b[i] >= 1800 && salario_b[i] < 3000){
			ir[i] = salario_b[i] * 0.1;
			inss[i] = salario_b[i] * 0.08;
			salario_l[i] = salario_b[i] - inss[i] - ir[i];
		}
		if (salario_b[i] < 5000){
			ir[i] = salario_b[i] * 0.2;
			inss[i] = salario_b[i] * 0.08;
			salario_l[i] = salario_b[i] - inss[i] - ir[i];
			cout<<"Funcionario: "<<nome[i]<<endl;
			cout<<"Salario Bruto: "<<salario_b[i]<<endl;
			cout<<"INSS: "<<inss[i] <<endl;
			cout<<"Imposto Rendimento: " <<ir<<endl;
			cout<<"Salario Liquido: "<<salario_l[i];
			cout<<"=========================================="<<endl;
		}
		}
		if (salario_b[i] >= 5000){
			ir[i] = salario_b[i] * 0.3;
			inss[i] = salario_b[i] * 0.08;
			salario_l[i] = salario_b[i] - inss[i] - ir[i];
			totsalario_l = totsalario_l + salario_l;
			cout<<"Funcionario: "<<nome[i]<<endl;
			cout<<"Salario Bruto: "<<salario_b[i]<<endl;
			cout<<"INSS: "<<inss[i] <<endl;
			cout<<"Imposto Rendimento: " <<ir[i]<<endl;
			cout<<"Salario Liquido: "<<salario_l[i];
			cout<<"Total salario liquido: "<<totsalario_l <<endl;
			cout<<""Total Inss: "<<totinss <<endl;
			cout<<"==========================================";
		}
		if(salario_b[i] < 1800){
			totalIsento++;
			inss[i] = salario_b[i] * 0.08;
			salario_l[i] = salario_b[i] - inss[i] - ir[i];
			cout<<"Funcionario: "<<nome[i];
			cout<<"INSS: "<<inss[i]<<endl;
			cout<<"Salario Liquido: "<<salario_l[i]<<endl;
			cout<<"=========================================="<<endl;
		}
		}


