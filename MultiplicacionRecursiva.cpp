#include <iostream>
using namespace std;
void multiplicacionRecursiva(int a);
void respuesta(int a);
int main(){
	int a;
	int numero;
	cout<<"ingrese un numero"<<endl;
	cin>>numero;
	multiplicacionRecursiva(numero);

	
	
}
void multiplicacionRecursiva(int a){
	int b;
	cout<<a<<" ";
	if(a>0){
	return multiplicacionRecursiva(a-1);
	}
}

