#include <stdio.h>

int main(){
//179
/*
Si intenta abrir un archivo para leer que no existe, la fopen()función devolverá NULL.
Consejo: Como buena práctica, podemos usar una ifdeclaración para probar NULLe imprimir algún texto en su lugar 
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
