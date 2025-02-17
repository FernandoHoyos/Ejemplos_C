#include <stdio.h>
#include <string.h>

int main(){

	printf("---Para comparar dos cadenas, puedes utilizar la función strcmp().---\n");
	//Devuelve 0 si las dos cadenas son iguales en longitud, de lo contrario un valor que no es 0:
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Helwww";
	
  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str1, str2));
  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str1, str3));
  
	return 0;
}
