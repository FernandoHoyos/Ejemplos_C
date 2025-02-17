#include <stdio.h>
#include <string.h>

int main(){

	printf("---Recorrer punteros (for).---\n");
	//134-135
	int myNumbers[4] = {25, 50, 75, 100};
	int i;
	
	for (i = 0; i < 4; i++){
		printf("%d\n", myNumbers[i]);
	}
	
	
	printf("---imprimamos la direcci�n de memoria de cada elemento de la matriz:.---\n");
	//136-137
	int myNumbers2[4] = {25, 50, 75, 100};
	int ii;
	
	for (ii = 0; ii < 4; ii++){
		printf("%p\n", &myNumbers2[ii]);
	}
	/*
	N�tese que el �ltimo n�mero de la direcci�n de memoria de cada uno de los elementos es diferente, con una adici�n de 4.
	Esto se debe a que el tama�o de un inttipo suele ser de 4 bytes, recuerda:
	*/
	printf("---Tama�o de int---\n");
	
	// Create an int variable
	int myInt;

	// Get the memory size of an int
	printf("%lu\n", sizeof(myInt));
	
	/*138
	Entonces, del "ejemplo de direcci�n de memoria" anterior, puede ver que el compilador reserva 4 bytes de memoria para cada elemento 
	de la matriz, lo que significa que toda la matriz ocupa 16 bytes (4 * 4) de almacenamiento de memoria:
	*/
	printf("---Tama�o de todo el Array/Matriz---\n");
	int myNumbers3[4] = {25, 50, 75, 100};
	printf("Tama�o Array 4\nX\nCantidad valores 4:\n=%lubytes\n", sizeof(myNumbers3));

	return 0;
}
