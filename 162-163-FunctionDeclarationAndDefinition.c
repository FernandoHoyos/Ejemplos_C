#include <stdio.h>
//162 Es el mismo ejemplo del ejercicio 147.

//163
//Function declaration
void FDYD();

int main(){
//Delcaracion y definicion de funciones
	printf("------");
//162 Es el mismo ejemplo del ejercicio 147.

	printf("---Declaracion y Definicion---\n");

//163
/*
Una funci�n consta de dos partes:
Declaraci�n: el nombre de la funci�n, el tipo de retorno y los par�metros (si los hay), que pondremos fuera de main.
Definici�n: el cuerpo de la funci�n (c�digo a ejecutar), que pondremos despues de toda la funcion main.
La llamada la haremos dentro de main.
*/
//Esto har� que el c�digo est� mejor organizado y sea m�s f�cil de leer:
FDYD(); //call the function	
	return 0;
}

//Function definition
void FDYD(){
	printf("I just got executed!");
}
