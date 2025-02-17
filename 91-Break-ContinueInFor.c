#include <stdio.h>

int main(){
	
	//La declaración break también se puede utilizar para salir de un bucle.
	int i;
  
  	for (i = 0; i < 10; i++) {
    	if (i == 5) {
      	break;
    	}
    	printf("%d\n", i);
  	}
  	printf("---------------------------------------\n");
  	
  	/*
	La declaración continue interrumpe una iteración (en el bucle), si se produce una condición especificada, 
	y continúa con la siguiente iteración en el bucle.
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
