#include <iostream>
using namespace std;
int main(){
	int list[14]={4,7,44,47,74,77,444,447,474,477,777,774,747,744};
	int number;
	cin>>number;
	for(int i=0;i<14;i++){
		if(number%list[i]==0){
			number=0;
		}
	}
	while(number!=0){
		int last=number%10;
		if(last!=4 && last!=7){
			break;
		}
		number=(number-last)/10;
	}
	if(number==0){
	cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}