#include <stdio.h>
#include <string.h>

int main(){

	printf("---Take String Input.---\n");

  // Tambi�n puedes obtener una cadena ingresada por el usuario:
  // Create a string
  char firstName[30];

  // Ask the user to input some text (name)
  printf("Enter your first name and press enter: \n");

  // Get and save the text
  scanf("%s", firstName); // No se le pone & porque ya tiene asignado el tama�o en la declaracion de la variable.

  // Output the text
  printf("Hello %s\n", firstName);
  
  
	printf("---scanf y  fgets.---\n");  
	//Utilice la funci�n scanf() para obtener una sola palabra como entrada y �sela fgets() para m�ltiples palabras.
  	//scanf
  	char fullName[30];
	printf("Type your full name (scanf): \n");
	scanf("%s", &fullName);
	printf("Hello %s", fullName);
	// Type your full name: John Doe
	// Hello John
	
	//fgets
	
	
	
  
	return 0;
}
