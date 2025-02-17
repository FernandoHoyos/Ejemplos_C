#include <stdio.h>

//El "bucle interno" se ejecutar� UNA VEZ por cada iteraci�n del "bucle externo".

int main(){
	
	int i, j;
  
  // Outer loop
  for (i = 1; i <= 2; ++i) {
    printf("Outer/Exterior: %d\n", i);  // Executes 2 times
    
    // Inner loop
    for (j = 1; j <= 3; ++j) {
      printf(" Inner/Interior: %d\n", j);  // Executes 6 times (2 * 3)
    }
  }
	
	return 0;
}
