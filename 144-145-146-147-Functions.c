#include <stdio.h>
#include <string.h>
//147
	void calculateSum(){
		int x = 5;
		int y = 10;
		int sum = x + y;
		printf("The sum of x + y is: %d", sum);
	}

int main(){
	
	printf("---Crear/Declarar una function---\n\n");
	//144 Para crear/declarar su propia función.
	/*sintaxis
	void myFunction() {
  	// code to be executed
	}
	*/
	void myFunction(){
		printf("Soy la function creada!\nY me has llamado.\n");
	}
	
	printf("---Llamar a una función---\n");
	//145-146
	myFunction(); 
	//Las funciones se pueden llamas las veces que sean necesarias.
	/*
	myFunction();
	myFunction();
	myFunction();
	*/
	
	printf("---Calcular la suma de dos números---\n");
	//147
	/*
	Puedes poner casi cualquier cosa que quieras dentro de una función. 
	El propósito de la función es guardar el código y ejecutarlo cuando lo necesites.
	*/
	/*Crear la function
	void calculateSum(){
		int x = 5;
		int y = 10;
		int sum = x + y;
		printf("The sum of x + y is: %d", sum);
	}
	*/
	//La function anterior la saque fuera de int main porque es el ejemplo original.
	//ahora si llamo la function calculateSum
	calculateSum();
	/*Ejemplo X????
	void calculateSum() {
  		int x = 3;
  		int y = 7;
  		printf("Sum: %d\n", x + y); //¿En donde se esta guardando el resultado?
    	printf("Sum: %d\n", x);
    	printf("Sum: %d", y);
	}

  	calculateSum();

	*/
	return 0;
}
