#include <stdio.h>

int main(){
//179
/*
Si intenta abrir un archivo para leer que no existe, la fopen()funci�n devolver� NULL.
Consejo: Como buena pr�ctica, podemos usar una ifdeclaraci�n para probar NULLe imprimir alg�n texto en su lugar 
(cuando el archivo no existe).
*/

FILE *fptr;

// Open a file in read mode
fptr = fopen("archivoNoExistente.txt", "r");

//Print some text if the file does not exist
if (fptr == NULL){
	printf("Not able to open the file / El archivo no existe.");
}

//Close the file
fclose(fptr);

	return 0;
}
