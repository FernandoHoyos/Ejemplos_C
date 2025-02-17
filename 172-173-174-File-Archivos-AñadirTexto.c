#include <stdio.h>
/*
FILENAME: El nombre del archivo real que desea abrir (o crear), como filename.txt (FILENAME es algun tipo de dato).

MODE: Un solo car�cter, que representa lo que desea hacer con el archivo (leer, escribir o agregar):
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
	
	FILE *fptr; //FILE es b�sicamente un tipo de datos y necesitamos crear una variable de puntero para trabajar con �l (fptr). 
	
	//Crear un archivo llamdo archivo1.txt
	//fptr = fopen("C:\\Users\\Sketchup\\Desktop\\K&R_C\\Codigos_C\\CIntro3WSchool\\archivos\\archivo1.txt", "w"); //Ruta del archivo
	
/*174
A�adir contenido a un archivo
Si desea agregar contenido a un archivo sin eliminar el contenido anterior, puede utilizar el modo a.
El modo a agrega contenido al final del archivo
*/	
	fptr = fopen("C:\\Users\\Sketchup\\Desktop\\K&R_C\\Codigos_C\\CIntro3WSchool\\archivos\\archivo1.txt", "a"); //Ruta del archivo
	

/*172
El w modo significa que el archivo est� abierto para escritura . Para insertar contenido en �l, puedes usar la fprintf() 
funci�n y agregar la variable de puntero ( fptr en nuestro ejemplo) y algo de texto.
*/

	//Write some text to the file
	fprintf(fptr, "Escribo texto en el fichero, con fprintf.\n");

/*173
Nota: si escribe en un archivo que ya existe, se eliminar� el contenido anterior y se insertar� el nuevo. 
Es importante saber esto, ya que podr�a borrar contenido existente por accidente.
*/
	
	//fprintf(fptr, "Hello World!"); //Sobre escribio el Some text.

//174 Nota: Al igual que con el modo w; si el archivo no existe, el modo a crear� un nuevo archivo con el contenido "adjunto".
	fprintf(fptr, "\nA�ado texto en el fichero usando el modo a.\n");
	
	//Close the file
	fclose(fptr);
	
	return 0;
}
