#include <stdio.h>
#include <string.h>

int main(){

	printf("---Entrada del usuario.---\n");
	//Generar un número ingresado por el usuario:
  // Create an integer variable that will store the number we get from the user
  int myNum;

  // Ask the user to type a number
  printf("Type a number and press enter: \n"); 

  // Get and save the number the user types
  scanf("%d", &myNum); //el operador de referencia (&), que almacena la dirección de memoria de la variable.

  // Print the number the user typed
  printf("Your number is: %d", myNum);
  
	return 0;
}
