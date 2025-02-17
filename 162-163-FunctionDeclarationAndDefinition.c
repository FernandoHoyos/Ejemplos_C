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
Una función consta de dos partes:
Declaración: el nombre de la función, el tipo de retorno y los parámetros (si los hay), que pondremos fuera de main.
Definición: el cuerpo de la función (código a ejecutar), que pondremos despues de toda la funcion main.
La llamada la haremos dentro de main.
*/
//Esto hará que el código esté mejor organizado y sea más fácil de leer:
FDYD(); //call the function	
	return 0;
}

//Function definition
void FDYD(){
	printf("I just got executed!");
}
