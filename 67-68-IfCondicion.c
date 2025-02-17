/*Utilice la ifdeclaración para especificar un bloque de código que se ejecutará si se cumple una condición true.
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

