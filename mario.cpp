#include<iostream>

using namespace std;

int main(){
	int number_cases;
	int number_walls;
	cin>>number_cases;
	int aux1=1;
	while(number_cases>0){
		cin>>number_walls;
		int high;
		int number_low_jump=0;
		int number_shorter_jump=0;
		int aux=0;
		int previous;
		while(aux<number_walls){
			cin>>high;
			if(aux==0){previous=high;}
			else{
				if(previous>high){number_shorter_jump++;}
				if(previous<high){number_low_jump++;}
				previous=high;
			}
			aux++;
		}
		cout<<"Case "<<aux1<<": "<<number_low_jump<<" "<<number_shorter_jump<<endl;
		number_cases--;
		aux1++;
	}
	return 0;
}
