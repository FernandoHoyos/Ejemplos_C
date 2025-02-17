#include <stdio.h>

int main(){
	
	/*
	El bucle while recorre un bloque de código siempre que se cumpla una condición especificada true.
	*/
	/* Sintaxis
	
	while (condition) {
  		// code block to be executed
	}
	
	*/
	
	int i = 0;
	while(i < 5){
		printf("%d\n", i);
		i++;
	}
	
	/*
	Nota: ¡No olvides aumentar la variable utilizada en la condición ( i++), 
	de lo contrario el bucle nunca terminará!
	*/
	
	return 0;
}
