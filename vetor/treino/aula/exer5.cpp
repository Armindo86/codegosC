#include <iostream>
using namespace std;
main(){
	setlocale (LC_ALL, "portuguese");
	int num[3];
	
	
	for(int i = 0; i < 3; i++){
		cout<<"Digite o numero: " <<endl;
		cin>>num;
	cout<<" O valor é: " << num[2] <<endl;
}
}
