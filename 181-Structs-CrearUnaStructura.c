#include <stdio.h>
	
/*Las estructuras (también llamadas structs) son una forma de agrupar varias variables relacionadas en un solo lugar. 
Cada variable de la estructura se conoce como miembro de la estructura.
A diferencia de una matriz , una estructura puede contener muchos tipos de datos diferentes (int, float, char, etc.).
*/

//Crear una estructura
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon

int main(){
/*Para acceder a la estructura, debes crear una variable de la misma.
Utilice la palabra struct clave dentro del método main(), 
seguida del nombre de la estructura y luego el nombre de la variable de la estructura:
*/
//Crea una variable de estructura con el nombre "s1".
struct MyStructure s1;

//Assing values to members of s1
s1.myNum = 13;
s1.myLetter ='B';

//Print values
printf("My number: %d\n", s1.myNum);
printf("My letter: %c\n", s1.myLetter);
	
	return 0;
}
