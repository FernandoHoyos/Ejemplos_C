#include <stdio.h>

int main(){
	
/*
Cuando sepas exactamente cuántas veces quieres recorrer un bloque de código, 
utiliza el forbucle en lugar de un whilebucle.
*/	
	int i;
	for(i=0;i<5;i++){
		printf("%d\n", i);
	}
	
//¿Tambien se puede declarar en la expresion 1?
//for(int i = 0; i < 5; i++)	No funciono.
for(i = 0; i < 5; i++) {
  printf("Yes\n");
}


//Sintaxis
/*
for (expression 1; expression 2; expression 3) {
  // code block to be executed
}

La expresión 1 se ejecuta (una vez) antes de la ejecución del bloque de código.

La expresión 2 define la condición para ejecutar el bloque de código.

La expresión 3 se ejecuta (cada vez) después de que se haya ejecutado el bloque de código.

*/
	return 0;
}
