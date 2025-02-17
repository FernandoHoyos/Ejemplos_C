#include <stdio.h>
#include <string.h>

int main(){
	char str1[20] = "Hello "; //Tener encuenta el tamaño en memoria tiene que tener el TAMAÑO suficiente para ALMACENAR las dos cadenas.
	char str2[] = "World!";
	printf("---Concatenar str1 y str2---");
	//Concatenar str2 a str1 (el resultado se almacena en str1)
	strcat(str1, str2);
	//Print str1
	printf("\n%s", str1);
	
	return 0;
}
