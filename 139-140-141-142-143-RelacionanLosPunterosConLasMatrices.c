#include <stdio.h>
#include <string.h>

int main(){

	printf("---139---\n");
	//El nombre de una matriz es en realidad un puntero al primer elemento de la matriz.
  	int myNumbersa[4] = {25, 50, 75, 100};

	printf("---Obtener la direccion de memoria de la matriz de myNumbers.---\n");
  	// Get the memory address of the myNumbers array / Obtener la direccion de memoria de la matriz de myNumbers.
 	printf("%p\n", myNumbersa);
 	
	printf("---Obtener la direccion de memoria del primer elemento de la matriz.---\n");
  	// Get the memory address of the first array element / Obtener la direccion de memoria del primer elemento de la matriz.
  	printf("%p\n\n", &myNumbersa[0]);
	
	
	printf("---140---\n");
	//Dado que myNumbers es un puntero al primer elemento de myNumbers, puedes utilizar el operador * para acceder a él.
	printf("---Obtener el primer valor del Array almacenado en la direccin de memoria.---\n");
	int myNumbersb[4] = {25, 50, 75, 100};
  
  	// Get the value of the first element in myNumbers
  	printf("%d\n", *myNumbersb); //Obtener el valor almacenado en la direccin de memoria.
	
	printf("---141---\n");
	//Para acceder al resto de elementos en myNumbers, puedes incrementar el puntero/matriz (+1, +2, etc):
	int myNumbersc[4] = {25, 50, 75, 100};
	
 	// Get the value of the second element in myNumbers
  	printf("%d\n", *(myNumbersc + 1));
  	// Get the value of the third element in myNumbers
  	printf("%d\n", *(myNumbersc + 2));
  	// Get the value of the four element in myNumbers
  	printf("%d\n", *(myNumbersc + 3));
	
	
	
	printf("---142 Recorrerlo en bucle for---\n");
	//recorrerlo en bucle for
	int myNumbersd[4] = {25, 50, 75, 100};
	int *ptr = myNumbersd;
	int i;
	int length = (sizeof(myNumbersd) / sizeof(myNumbersd[0]));
	//printf("%d\n", length);
	
	for(i = 0; i < length; i++){
		printf("%d\n", *(ptr + i));
	}
	
	
	
	printf("---143 Cambiar el valor de los elementos de la matriz con punteros.---\n");
	//cambiar el valor de los elementos de la matriz con punteros:
	int myNumberse[4] = {25, 50, 75, 100};

  	// Change the value of the first element to 13
  	*myNumberse = 13;

  	// Change the value of the second element to 17
  	*(myNumberse +1) = 17;

  	// Get the value of the first element
  	printf("Valor del primer elemento cambiado a; %d\n", *myNumberse);

  	// Get the value of the second element
  	printf("Valor del segundo elemento cambiado a; %d\n", *(myNumberse + 1)); 
	
	return 0;
}
