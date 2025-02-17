#include <stdio.h>

int main(){
	
/*
Cuando sepas exactamente cu�ntas veces quieres recorrer un bloque de c�digo, 
utiliza el forbucle en lugar de un whilebucle.
*/	
	int i;
	for(i=0;i<5;i++){
		printf("%d\n", i);
	}
	
//�Tambien se puede declarar en la expresion 1?
//for(int i = 0; i < 5; i++)	No funciono.
for(i = 0; i < 5; i++) {
  printf("Yes\n");
}


//Sintaxis
/*
for (expression 1; expression 2; expression 3) {
  // code block to be executed
}

La expresi�n 1 se ejecuta (una vez) antes de la ejecuci�n del bloque de c�digo.

La expresi�n 2 define la condici�n para ejecutar el bloque de c�digo.

La expresi�n 3 se ejecuta (cada vez) despu�s de que se haya ejecutado el bloque de c�digo.

*/
	return 0;
}
