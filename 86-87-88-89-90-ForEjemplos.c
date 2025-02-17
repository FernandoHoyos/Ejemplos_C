#include <stdio.h>


int main(){
	
	//86 cuente hasta 100 de diez en diez.
	int i;
	
	for (i = 0 ; i <= 100 ; i += 10){
		printf("%d\n", i);
	}
	printf("-------------------------------------\n");
	
	//87 imprime números pares entre 0 y 10 (inclusive).
	int i2;
	
	for (i2 = 0 ; i2 <= 10 ; i2 = i2 + 2){
		printf("%d\n", i2);
	}
	printf("-------------------------------------\n");
	
	//88 imprimimos números impares.
	int i3;
  
  	for (i3 = 1; i3 < 10; i3 = i3 + 2) {
    	printf("%d\n", i3);
  	}
	printf("-------------------------------------\n");
	
	//89 imprimimos las potencias de 2 hasta 512.
	int i4;
  
  	for (i4 = 2; i4 <= 512; i4 *= 2) {
    	printf("%d\n", i4);
  	} 
	printf("-------------------------------------\n");
	
	//90 imprime la tabla de multiplicar para un número específico.
	int number = 2;
  	int i5;

  	// Print the multiplication table for the number 2
  	for (i5 = 1; i5 <= 10; i5++) {
    	printf("%d x %d = %d\n", number, i5, number * i5);
  	}
	
	
	return 0;
}
