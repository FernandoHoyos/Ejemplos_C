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
	//fptr = fopen("C:\\Users\\Sketchup\\Desktop\\K&R_C\\Codigos_C\\CIntro3WSchool\\archivos\\archivo1.txt", "w"); //Ruta del archivo
	
/*174
Añadir contenido a un archivo
Si desea agregar contenido a un archivo sin eliminar el contenido anterior, puede utilizar el modo a.
El modo a agrega contenido al final del archivo
*/	
	fptr = fopen("C:\\Users\\Sketchup\\Desktop\\K&R_C\\Codigos_C\\CIntro3WSchool\\archivos\\archivo1.txt", "a"); //Ruta del archivo
	

/*172
El w modo significa que el archivo está abierto para escritura . Para insertar contenido en él, puedes usar la fprintf() 
función y agregar la variable de puntero ( fptr en nuestro ejemplo) y algo de texto.
*/

	//Write some text to the file
	fprintf(fptr, "Escribo texto en el fichero, con fprintf.\n");

/*173
Nota: si escribe en un archivo que ya existe, se eliminará el contenido anterior y se insertará el nuevo. 
Es importante saber esto, ya que podría borrar contenido existente por accidente.
*/
	
	//fprintf(fptr, "Hello World!"); //Sobre escribio el Some text.

//174 Nota: Al igual que con el modo w; si el archivo no existe, el modo a creará un nuevo archivo con el contenido "adjunto".
	fprintf(fptr, "\nAñado texto en el fichero usando el modo a.\n");
	
	//Close the file
	fclose(fptr);
	
	return 0;
}
