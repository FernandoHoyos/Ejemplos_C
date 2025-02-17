#include <stdio.h>
/*
FILENAME: El nombre del archivo real que desea abrir (o crear), como filename.txt (FILENAME es algun tipo de dato).

MODE: Un solo carácter, que representa lo que desea hacer con el archivo (leer, escribir o agregar):
w - Escribe en un archivo
a - Agrega nuevos datos a un archivo
r - Lee desde un archivo
*/
/*
Sintaxis:

FILE *fptr;
fptr = fopen(filename, mode);
*/

int main(){
	
	FILE *fptr; //FILE es básicamente un tipo de datos y necesitamos crear una variable de puntero para trabajar con él (fptr). 
	
	//Crear un archivo llamdo archivo1.txt
	fptr = fopen("C:\\Users\\Sketchup\\Desktop\\K&R_C\\Codigos_C\\CIntro3WSchool\\archivos\\archivo1.txt", "w"); //Ruta del archivo
	
	//Close the file
	fclose(fptr);
	
	return 0;
}
