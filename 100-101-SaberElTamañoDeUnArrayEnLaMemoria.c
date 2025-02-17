#include <stdio.h>

int main(){
	printf("------------------El operador sizeof---------------------\n");
	//100 El operador sizeof devuelve el tamaño de un tipo en bytes.
	printf("Un tipo int generalmente tiene 4 bytes, por lo que, según el ejemplo anterior, 4x5 (4 bytes x 5 elementos) = 20 bytes.\n");
	int myNumbers[] = {10, 25, 50, 75, 100};
  	printf("El tamaño del Array en Memoria es: %lu\n\n", sizeof(myNumbers));
  	
  	printf("------------------Saber cuántos elementos tiene una matriz---------------------\n");
  	/*101
	Saber cuántos elementos tiene una matriz, puedes usar la siguiente fórmula 
	(que divide el tamaño de la matriz por el tamaño del primer elemento de la matriz).  
	*/
	int myNumbersb[] = {10, 25, 50, 75, 100};
  	int length = sizeof(myNumbersb) / sizeof(myNumbersb[0]);
  	printf("La cantidad de elementos de este Array es: %d\n", length);
	
	
	
	
	return 0;
}
