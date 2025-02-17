#include <stdio.h>
//164 Es el mismo ejemplo del ejercicio 154.
int myFunctiona(int x, int y) {
  return x + y;
}

//165
//Function declaration
int myFunctionb(int x, int y);


int main(){
//¿Que pasa con los parametros?
	printf("---Ejemplo 154---\n");
//164 Es el mismo ejemplo del ejercicio 154.
  int resulta = myFunctiona(5, 3); 
  printf("Result is = %d\n", resulta);

	printf("---Ejercicio 164 (154) con buenas practicas---\n");

//165
//call the function	
int resultb = myFunctionb(5, 3);
printf("Result is = %d", resultb);
	return 0;
}

//Function definition
int myFunctionb(int x, int y){
	return x + y;
}
