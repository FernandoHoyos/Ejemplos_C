#include <stdio.h>

//Longitud/largor de un string.
#include <string.h>

int main(){
	//119
	printf("Para obtener la longitud de una cadena, puede utilizar la funci�n strlen().\n");
	
	char alphabeta[] = "ABCDEFGHIJKLMN�OPQRSTUVWXYZ";
	printf("%d\n", strlen(alphabeta));
	
	printf("---sizeof y strlen.---\n");
	//120 Secomportan de manera distinta sizeof cuenta el caracter de escape \0.
	printf("Length/strlen is: %d\n", strlen(alphabeta));
	printf("Size/sizeof is: %d\n", sizeof(alphabeta));
	
	//121 Tambi�n es importante que sepas que sizeofsiempre devolver� el tama�o de la memoria (en bytes), 
	//y no la longitud real de la cadena.
	printf("---sizeof(bytes) y strlen(Longitud).---\n");
	char alphabetb[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  	printf("Length is: %d\n", strlen(alphabetb));
  	printf("Size is: %d\n", sizeof(alphabetb));
	
	
		
	return 0;
}
