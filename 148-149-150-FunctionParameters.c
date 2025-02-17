#include <stdio.h>

//148
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

//149
void myFunction2(char name[], int age){
	printf("Hello %s. You are %d years old\n", name, age);
}

//150 (147 Sin argumentos)
void calculateSum(int x, int y){
	int sum = x + y;
	printf("The sum of %d + %d is: %d\n", x, y, sum);
}


int main(){

/*
Sintaxis
returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
*/

	printf("---Pasar parametros a la function---\n\n");
//148 Llamamos la funci�n, y pasamos un nombre, que se utiliza dentro de la funci�n 
//para imprimir "Hola" y el nombre de cada persona:

  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  myFunction("Me pasaron como parametro y ahora dentro de function soy un argumento.");
  
  
  	printf("---M�ltiples par�metros---\n\n");
  	//149 
  myFunction2("Liam", 3);
  myFunction2("Jenny", 14);
  myFunction2("Anja", 30);
  myFunction2("Ferxxo", 37);
  
  
  printf("\n---CalculateSum---\n\n");
  //150 "147"
  /*
  Tenga en cuenta que cuando trabaja con m�ltiples par�metros, la llamada de funci�n debe tener la misma cantidad de argumentos 
  que par�metros, y los argumentos deben pasarse en el mismo orden.
  */
  calculateSum(5, 3);
  calculateSum(8, 2);
  calculateSum(37, 37);
	
	return 0;
}
