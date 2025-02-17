#include <stdio.h>
#include <string.h>

int main(){

	printf("---Memory Address.---\n");
	//Utilice el operador de referencia (&)
	int myAge = 37;
  	printf("%p", &myAge);
  	
  	
  	/*
	También debe tener en cuenta que &myAge a menudo se lo denomina "puntero". 
	Básicamente, un puntero almacena la dirección de memoria de una variable como su valor. 
	Para imprimir valores de puntero, utilizamos el %p especificador de formato  
	*/
  
	return 0;
}
