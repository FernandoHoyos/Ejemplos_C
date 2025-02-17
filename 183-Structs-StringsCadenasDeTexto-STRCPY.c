#include <stdio.h>
/*
Recuerde que las cadenas en C son en realidad una matriz de caracteres y, lamentablemente, 
no puede asignar un valor a una matriz como esta myString[38]:
*/
struct myStructure {
	int myNUm;
	char myLetter;
	char myString[38]; //String/Matriz
};
/*Se producirá un ERROR, Sin embargo, existe una SOLUCIÓN para esto.
Puedes usar la función strcpy() y asignar el valor a s1.myString, de la siguiente manera:*/
int main(){
	struct myStructure s1;
	
	//Trying to assing a value to the string
	//s1.myString = "Ya tienes 38 años, y sigues igual."; //ERROR: asisignmento to expression with array type:
	
	//SOLUCION:
	strcpy(s1.myString, "Ya tienes 38 años, y sigues igual.");
	
	//Trying to print the value
	printf("My string: %s", s1.myString);

	return 0;
}
