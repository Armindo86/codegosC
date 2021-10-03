#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "portuguese");
	/*declaração de matriz*/
	int M[3][3], l, c;
	
	/*Para percorrer a matriz é necessarios criar dois for: Coluna/linha */
	for(l = 0; l < 3; l++){
		for	(c = 0; c < 3; c++){
			cout<<"Digite um valor ["<<l>>", "<<c>>"]: "; 
			cin>>M[l][c]<<"\t";
		}
		/*Quebra da linha no formato de matriz*/
		cout<<endl;
	}
	/* saída dos dados*/
		for(l = 0; l < 3; l++){
		for	(c = 0; c < 3; c++){
			cout<<M[l][c];
		}
	}
	

}
