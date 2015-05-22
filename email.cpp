#include <iostream>
using namespace std;
int main(){
	string word;
	cin>>word;
	bool validar=true;
	string result="";
	string result1="";
	for(int i=0;i<word.length();i++){
		if(validar && word[i]=='a' && word[i+1]=='t' && i!=0 && i<word.length()-2){
			result=result+"@";
			i++;
			validar=false;
		}
		else{
			result=result+word[i];
		}
	}
	word=result;
	for(int i=0;i<word.length();i++){
		if(word[i]=='d' && word[i+1]=='o' && word[i+2]=='t' && i!=0 && i<word.length()-3){
			result1=result1+".";
			i=i+2;
		}
		else{
			result1=result1+word[i];
		}
	}
	cout<<result1<<endl;
	return 0;
}