#include <stdio.h>

int main() {

//80 Cuenta regresiva simple.
  int countdown = 5;

  while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
  }

  printf("Happy New Year!!\n");	
  
  //81 imprime números pares entre 0 y 10 (inclusive).
    int i = 0;
  	while (i <= 10) {
 	   printf("%d\n", i);
 	   i += 2;
 	 }
  
  //82 invertir algunos números.
    	// A variable with some specific numbers
  	int numbers = 12345;
  
  		// A variable to store the reversed number
 	int revNumbers = 0;

  		// Reverse and reorder the numbers
  	while (numbers) {
    	// Get the last number of 'numbers' and add it to 'revNumber'
    	revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
  }

  // Output the reversed numbers
  printf("%d\n", revNumbers);
  
  
  //83 Combinado con una declaración if else , digamos que jugamos un juego de Yatzy.
  /*Si el bucle pasa valores que van del 1 al 5, imprime "No Yatzy". 
  Siempre que pasa el valor 6, imprime "¡Yatzy!".
  */
    int dice = 1;
  
  	while (dice <= 6) {
    	if (dice < 6) {
      	printf("No Yatzy\n");
    	} else {
      	printf("Yatzy!\n");
    	}
    	dice = dice + 1;
  	}
	
	return 0;
}



