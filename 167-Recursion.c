#include <stdio.h>

//Recursión
/*
La recursión es la técnica que consiste en hacer que una función se llame a sí misma. 
Esta técnica permite descomponer problemas complicados en problemas más simples que son más fáciles de resolver.
Simplifica el código al dividir problemas complejos en otros más pequeños.
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
	if (k > 0){ //Una declaración condicional que evita futuras llamadas recursivas, esto permite que termine.
		return k + sum(k - 1);
	} else {
		return 0;
	}
}
