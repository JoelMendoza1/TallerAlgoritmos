#include <iostream>

using namespace std;
//Paso1
//DECLARACION DEL AS FUNCIONES

void decreciente(int n);
int main()
{
    //Paso3
  

    decreciente(1);



    return 0;
}





void decreciente(int n){
    //PASO1
	  
    if(n==1){
    cout<<0<<"-";
	 
    }
    cout<<n<<"-";
    if(n<100){
        //PASO3- PASO2
        decreciente(n+(n));	
		
	}
	
    
}


