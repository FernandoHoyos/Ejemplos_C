#include <stdio.h>


int main(){
	
	//108 Tenga en cuenta que debe utilizar comillas dobles ("...").
	
	char greetingsa[] = "Hello World!\n";
	printf("%s", greetingsa);
	
	//109las cadenas son en realidad matrices en C.
	//Tenga en cuenta que debemos utilizar el %cespecificador de formato para imprimir un solo car�cter.
	char greetingsb[] = "Hello World!\n";
  	printf("%c", greetingsb[0]);
  	
  	/*110 Modificar cadenas.
	  Para cambiar el valor de un car�cter espec�fico en una cadena, 
	  consulte el n�mero de �ndice y utilice comillas simples.
	*/
	char greetings[] = "Hello World!\n";
	greetings[0] = 'J';
	greetings[3] = 'K';
	printf("%s", greetings);
	
	//111-112 Hacer un bucle a trav�s de un string
	//Tambi�n puedes recorrer los caracteres de una cadena, utilizando un for bucle.
	/*Usar la f�rmula sizeof (en lugar de escribir manualmente el tama�o de la matriz 
	en la condici�n del bucle (i < 5)) para hacer que el bucle sea m�s sostenible.
	*/
	char carName[] = "Developer\n";
  	int i;
  	//char carName[] = "Puedo escribir sin necesidad de poner la posicion del valor del array.";
  	//int rep = sizeof(carName)/sizeof(carName[0])
  	//for (i=0;i<rep;i++){
  	for (i = 0; i < 9; ++i) {
    	printf("%c\n", carName[i]);
  	}
  	
 
	
	
	return 0;
}
