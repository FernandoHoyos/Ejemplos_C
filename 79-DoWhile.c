#include <stdio.h>

/*
Este bucle ejecutará el bloque de código una vez, antes de verificar si la condición es verdadera, 
y luego repetirá el bucle mientras la condición sea verdadera.
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
