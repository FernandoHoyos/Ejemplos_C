#include <stdio.h>

int main(){
	
	/*
	El bucle while recorre un bloque de c�digo siempre que se cumpla una condici�n especificada true.
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
	Nota: �No olvides aumentar la variable utilizada en la condici�n ( i++), 
	de lo contrario el bucle nunca terminar�!
	*/
	
	return 0;
}
