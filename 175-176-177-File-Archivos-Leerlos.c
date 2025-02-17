#include <stdio.h>

int main(){
	FILE *fptr;
	
	//175 Open a file in read mode (r)
		fptr = fopen("C:\\Users\\Sketchup\\Desktop\\K&R_C\\Codigos_C\\CIntro3WSchool\\archivos\\archivo1.txt", "r"); //Ruta del archivo
	
	//176 Creemos una cadena que pueda almacenar hasta 100 caracteres
	//Store the content of the file
	char myString[100];
	
	//177 Para leer el contenido de filename.txt, podemos utilizar la fgets()función.
	//La función fgets() toma tres parámetros.
	/*
	1) myString = donde almacenarlo.
	2) 100 = Tamaño máximo de los datos a leer seran el mismo de la matriz.
	3) fptr = Requiere un puntero para leer el archivo.
	*/
	// Read the content and store it inside myString
	fgets(myString, 100, fptr);
	
	//Print the file content
	printf("%s", myString);
	
	//Close the file
	fclose(fptr);
	
	//Nota: La función fgets solo lee la primera línea del archivo. En este archivo hay 3 lineas, para leerlas usar un bucle while.
	
	return 0;
}
