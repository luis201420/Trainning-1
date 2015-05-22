#include <iostream>
using namespace std;

int main(){
	int number;
	cin>>number;
	if(number>=2 && number<=9){
		for(int i=number;i>=0;i--){
			int aux=i;
			bool validar=false;
			int ver=number-i;
			int cont=0;
			int num_col=1+(2*ver);
			while(aux>0){cout<<"  ";aux--;}
			while(num_col>0){
				if(i!=number){if(cont==ver){validar=true;}if(num_col==1){cout<<cont;}else{cout<<cont<<" ";}}
				else{cout<<cont;}
				if(validar){cont--;}
				else{cont++;}
				num_col--;
			}
			cout<<endl;
		}
		for(int i=1;i<=number;i++){
			int aux=i;
			bool validar=false;
			int ver=number-i;
			int cont=0;
			int num_col=1+(2*ver);
			while(aux>0){cout<<"  ";aux--;}
			while(num_col>0){
				if(i!=number){if(cont==ver){validar=true;}if(num_col==1){cout<<cont;}else{cout<<cont<<" ";}}
				else{cout<<cont;}
				if(validar){cont--;}
				else{cont++;}
				num_col--;
			}
			cout<<endl;
		}

	}
	return 0;
}