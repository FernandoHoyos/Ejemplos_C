/*Utilice la ifdeclaraci�n para especificar un bloque de c�digo que se ejecutar� si se cumple una condici�n true.
Sintaxis
if (condition) {
  // block of code to be executed if the condition is true
}
*/

# include <stdio.h>

int main() {
	
  if (20 > 18) {
    printf("20 is greater than 18.\n");
  }	
  
	int x1 = 20;
	int y2 = 18;
	if (x1 > y2) {
    printf("x is greater than y.\n");
  } 
	return 0;
}

