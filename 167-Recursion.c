#include <stdio.h>

//Recursi�n
/*
La recursi�n es la t�cnica que consiste en hacer que una funci�n se llame a s� misma. 
Esta t�cnica permite descomponer problemas complicados en problemas m�s simples que son m�s f�ciles de resolver.
Simplifica el c�digo al dividir problemas complejos en otros m�s peque�os.
*/
//Function declaration
int sum(int k);

int main(){
	
	//Llamada function
	int result = sum(10);
	printf("%d", result);
	
	return 0;
}

//Define function
int sum(int k){
	if (k > 0){ //Una declaraci�n condicional que evita futuras llamadas recursivas, esto permite que termine.
		return k + sum(k - 1);
	} else {
		return 0;
	}
}
