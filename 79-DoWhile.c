#include <stdio.h>

/*
Este bucle ejecutar� el bloque de c�digo una vez, antes de verificar si la condici�n es verdadera, 
y luego repetir� el bucle mientras la condici�n sea verdadera.
*/
/*
Sintaxis
	do {
	  // code block to be executed
	}
	while (condition);

*/

int main(){
	
	int i = 0;
	
  	do {
  	  printf("%d\n", i);
  	  i++;
 	 }
 	 while (i < 5);
	
	
	return 0;
}
