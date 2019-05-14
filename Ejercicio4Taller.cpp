#include <iostream>
using namespace std;
void suma(int a);

int main(){
	int a;
	int numero;
	cout<<"ingrese un numero: "<<endl;
	cin>>numero;
	suma(0);

	
	
}
void suma(int a){
	
	cout<<a<<" ";
	
	if(a<10){
	int b;
	return suma(a+1);
	b=b+a;
	cout<<b;
	}
	
}
