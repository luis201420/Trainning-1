#include <iostream>
using namespace std;

int contar(int a){
	int suma=0;
	while(a>0){
		if(a<10){suma=suma+1;a=0;}
		if(a==10){suma=suma+2;a=0;}
		if(a>10 && a<100){suma=suma+3;a=0;}
		if(a==100){suma=suma+4;a=0;}
		if(a>100 && a<1000){
			if(a>100 && a<=110){suma=suma+4;a=a%100;}
			else{suma=suma+7;a=0;}
		}
		if(a==1000){suma=suma+8;a=0;}
		if(a>1000 && a<10000){
			if(a>1000 && a<=1110){suma=suma+8;a=a%1000;}
			else{a=0;suma=suma+15;}
		}
		if(a==10000){suma=suma+16;a=0;}
		if(a>10000 && a<100000){
			if(a>10000 && a<=11110){suma=suma+16;a=a%10000;}
			else{a=0;suma=suma+31;}
		}
		if(a==100000){suma=suma+32;a=0;}
		if(a>100000 && a<1000000){
			if(a>100000 && a<=111110){suma=suma+32;a=a%100000;}
			else{a=0;suma=suma+63;}
		}
		if(a==1000000){suma=suma+64;a=0;}
		if(a>1000000 && a<10000000){
			if(a>1000000 && a<=1111110){suma=suma+64;a=a%1000000;}
			else{a=0;suma=suma+127;}
		}
		if(a==10000000){suma=suma+128;a=0;}
		if(a>10000000 && a<100000000){
			if(a>10000000 && a<=11111110){suma=suma+128;a=a%10000000;}
			else{a=0;suma=suma+255;}
		}
		if(a==100000000){suma=suma+256;a=0;}
		if(a>100000000 && a<1000000000){
			if(a>100000000 && a<=111111110){suma=suma+256;a=a%100000000;}
			else{a=0;suma=suma+511;}
		}
		if(a==1000000000){suma=suma+512;a=0;}
	}
	return suma;
}

int main(){
	int numero;
	cin>>numero;
	if(numero>=1 && numero<=1000000000){
		cout<<contar(numero)<<endl;
	}
	return 0;
}