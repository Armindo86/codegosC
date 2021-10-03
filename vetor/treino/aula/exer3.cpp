#include <iostream>
using namespace std;
main(){
	int num, num1, media = 0, soma = 0;
	
	cout<<"Informe um numero: " <<endl;
	cin>>num;
	
	cout<<" informe segundo numero: "<<endl;
	cin>>num1;
	soma = num1 + num;
	media = soma/2;
	
	cout<<"Soma é: "<< soma <<endl;
	cout<<"Media: " <<media;
}
