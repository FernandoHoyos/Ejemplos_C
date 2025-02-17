#include <stdio.h>

int main(){
	
	//La declaraci�n break tambi�n se puede utilizar para salir de un bucle.
	int i;
  
  	for (i = 0; i < 10; i++) {
    	if (i == 5) {
      	break;
    	}
    	printf("%d\n", i);
  	}
  	printf("---------------------------------------\n");
  	
  	/*
	La declaraci�n continue interrumpe una iteraci�n (en el bucle), si se produce una condici�n especificada, 
	y contin�a con la siguiente iteraci�n en el bucle.
	Este ejemplo omite el valor de 4.
	*/
  	int i2;
  
  	for (i2 = 0; i2 < 10; i2++) {
    	if (i2 == 4) {
      	continue;
    	}
    	printf("%d\n", i2);
  	}  
	
	return 0;
}
