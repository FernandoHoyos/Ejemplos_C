#include <stdio.h>

int main(){
	
	/*
	Para crear una ARRAY/matriz:
	1) Definir el tipo de dato (int)
	2) Nombre del Array
	3) No olvide los corchetes [] al final del nombre.
	
	Para insertat valores:
	4) Dentro de llaves {,,,} poner los valores del misto tipo y separados por comas.
	5) Acceder al Array se tiene que poner el numero de indice empezando por 0.
	*/
	printf("------------------Crear una ARRAY/matriz---------------------\n"); 
	int myNumbers[] = {25, 50, 75, 100};
  		printf("%d\n", myNumbers[0]);
  	
	
	printf("------------------Cambiar el valor de un elemento específico---------------------\n");  	
  	/*
	Para cambiar el valor de un elemento específico, consulte el número de índice.
	myNumbers[0] = 33;  
	*/
	int myNumbersb[] = {25, 50, 75, 100};
  	myNumbersb[0] = 33; // Now outputs 33 instead of 25
  		printf("%d\n", myNumbersb[0]);
  		
  		
  	printf("------------------Recorrer un array en bucle---------------------\n");
  	//Recorrer un array en bucle.
  	int myNumbersc[] = {25, 50, 75, 100};
    	int i;
  
  		for (i = 0; i < 4; i++) {
    		printf("%d\n", myNumbersc[i]);
  		}
	
	printf("------------------Establecer el tamaño de la matriz---------------------\n");
	/*
	Establecer el tamaño de la matriz
	Otra forma común de crear matrices es especificar el tamaño de la matriz y agregar elementos más tarde.
	*/
	/*
	Al utilizar este método, debe conocer de antemano el número de elementos de la matriz 
	para que el programa pueda almacenar suficiente memoria.
	No es posible cambiar el tamaño de la matriz después de su creación.
	*/
	// Declare an array of four integers:
  		int myNumbersd[4];

  		// Add elements to it
  		myNumbersd[0] = 25;
  		myNumbersd[1] = 50;
  		myNumbersd[2] = 75;
  		myNumbersd[3] = 100;
  		printf("%d\n", myNumbersd[0]);
	
	//NOTA: No se debe de mezclar diferentes tipos de valores, los datos tiene que ser del mismo tipo.
	
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
	
	return 0;
}
