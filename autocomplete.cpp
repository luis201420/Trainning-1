#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
	string s;
	int number;
	cin>>s;
	cin>>number;
	vector<string> result;
	for(int i=0;i<number;i++){
		string words;
		cin>>words;
		if(words.substr(0,s.size())==s){
			result.push_back(words);
		}
	}
	if(result.size()>0){
		string menor=result[0];
		for(int i=0; i<result.size(); i++)
    	{
        	if(menor>result[i]){
        		menor=result[i];
       		}
    	}
    	cout<<menor<<endl;
    }
    else{
    	cout<<s<<endl;
    }
	return 0;
}