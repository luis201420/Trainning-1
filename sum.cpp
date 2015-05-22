#include <iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	int n_numbers=a.length()-((a.length()-1)/2);
	int l[n_numbers];
	int cont=0;
	bool validar=true;
	for(int i=0;i<a.length();i++){
		if(i%2==0){
			if(a[i]=='1'){l[cont]=1;}
			else if(a[i]=='2'){l[cont]=2;}
			else if(a[i]=='3'){l[cont]=3;}
			else{validar=false;}
			cont++;
		}
	}
	if(validar){
		for(int j=n_numbers;j>0;j--){
			for(int i=0;i<j-1;i++){
				if(l[i]>l[i+1]){
					int aux=l[i];
					l[i]=l[i+1];
					l[i+1]=aux;
				}
			}
		}
		string result="";
		for(int i=0;i<n_numbers;i++){
			if(i==n_numbers-1){cout<<l[i]<<endl;}
			else{cout<<l[i]<<"+";}
		}
	}
	return 0;
}