#include <iostream>
#include <conio.h>


using namespace std;

int main() {
	int v[5] = {1,2,3,4,5};
	
	
	cout<<"Informe o primeiro elemento: ";
	cin>>v[0];
	v[1] = -2;  
	v[2] = 10;
	v[3] = 8;
	v[4] = 5;
	
	
	cout<<v[0]<<" "<<v[1]<<v[2]<<" "<<v[3]<<" "<<v[4];
	
	int i=0;
	while ( i < 5){
		cout<<"Digite um numero: ";
		cin>>v[i];
		i++;
	}
	for (i=0; i<5; i++){
		cout<<"\n V["<<i<<"] : "<<v[i];
	}
	cout<<"\n\nOrdem inversa:";
	for (i=4; i>=0; i--){
		cout<<"\n V["<<i<<"] : "<<v[i];
		
	}
	
	
	int a[6];
	int b[6];
	int i2;
	for(i2=0;i2<6;i2++){
		cout << "Digite A["<<i2<<"] : ";
		cin>>a[i];
	}
	
	for(i2=0; i2<6; i2++){
		b[i2]=a[i2]/4;
		cout<<"\nB["<<i2<<"] : "<<b[i2];
	}



}
