/*
Es una forma abreviada de if else, que se conoce como operador ternario porque consta de tres operandos. 
Se puede utilizar para reemplazar varias líneas de código con una sola línea. 
Se suele utilizar para reemplazar instrucciones if else simples:
*/
/*
Sintaxis
variable = (condition) ? expressionTrue : expressionFalse;
*/
#include <stdio.h>

int main(){

  int time = 20;
  
	(time < 18) ? printf("Good day.") : printf("Good evening.");
	
//Escribimos la extructura de la forma anterior en vez de la clasica.
  
/*  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
*/  
  
	return 0;
}
