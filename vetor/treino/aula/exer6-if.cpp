#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	int i = 3, b = 2;
	
	if(i == b){
		cout<<"Variaveis s�o iguais: " <<i <<endl;
	}
	if (i != b){
		cout<<"Variaveis s�o diferentes: " <<i << b;
	}
}
