#include <stdio.h>

int main(){
	FILE *fptr;
	
	//175 Open a file in read mode (r)
		fptr = fopen("C:\\Users\\Sketchup\\Desktop\\K&R_C\\Codigos_C\\CIntro3WSchool\\archivos\\archivo1.txt", "r"); //Ruta del archivo
	
	//176 Creemos una cadena que pueda almacenar hasta 100 caracteres
	//Store the content of the file
	char myString[100];
	
	//177 Para leer el contenido de filename.txt, podemos utilizar la fgets()funci�n.
	//La funci�n fgets() toma tres par�metros.
	/*
	1) myString = donde almacenarlo.
	2) 100 = Tama�o m�ximo de los datos a leer seran el mismo de la matriz.
	3) fptr = Requiere un puntero para leer el archivo.
	*/
	//----------------------Bucle While---------------------------------------------------------
	
	// Read the content and print it
	
	while (fgets(myString, 100, fptr)){
		printf("%s", myString);
	}
	
	//-------------------------------------------------------------------------------
	//Close the file
	fclose(fptr);
	
	//Nota: La funci�n fgets solo lee la primera l�nea del archivo. En este archivo hay 3 lineas, para leerlas usar un bucle while.
	
	return 0;
}
