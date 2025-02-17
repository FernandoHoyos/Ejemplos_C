#include <stdio.h>

int main(){
	printf("------------------El operador sizeof---------------------\n");
	//100 El operador sizeof devuelve el tama�o de un tipo en bytes.
	printf("Un tipo int generalmente tiene 4 bytes, por lo que, seg�n el ejemplo anterior, 4x5 (4 bytes x 5 elementos) = 20 bytes.\n");
	int myNumbers[] = {10, 25, 50, 75, 100};
  	printf("El tama�o del Array en Memoria es: %lu\n\n", sizeof(myNumbers));
  	
  	printf("------------------Saber cu�ntos elementos tiene una matriz---------------------\n");
  	/*101
	Saber cu�ntos elementos tiene una matriz, puedes usar la siguiente f�rmula 
	(que divide el tama�o de la matriz por el tama�o del primer elemento de la matriz).  
	*/
	int myNumbersb[] = {10, 25, 50, 75, 100};
  	int length = sizeof(myNumbersb) / sizeof(myNumbersb[0]);
  	printf("La cantidad de elementos de este Array es: %d\n", length);
	
	
	
	
	return 0;
}
