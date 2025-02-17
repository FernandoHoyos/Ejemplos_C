#include <stdio.h>
#include <string.h>

int main(){

	printf("---Memory Address.---\n");
	//Utilice el operador de referencia (&)
	int myAge = 37;
  	printf("%p", &myAge);
  	
  	
  	/*
	Tambi�n debe tener en cuenta que &myAge a menudo se lo denomina "puntero". 
	B�sicamente, un puntero almacena la direcci�n de memoria de una variable como su valor. 
	Para imprimir valores de puntero, utilizamos el %p especificador de formato  
	*/
  
	return 0;
}
