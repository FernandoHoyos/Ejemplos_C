#include <stdio.h>
#include <string.h>

int main(){

	printf("---Punteros.---\n");
	
	//131
	int myAge = 37;
	
	printf("Valor de la variable: %d\n", myAge);
  	printf("Ubicacion en Memoria: %p\n", &myAge);
  	
  	
  	printf("---Crear un puntero.---\n");
  	/*132
	Un puntero es una variable que almacena la direcci�n de memoria de otra variable como su valor.
	Una variable de puntero apunta a un tipo de datos (como int) del mismo tipo y SE CREA con el operador *.
	*/
  
    
  	int myAge2 = 38;  // An int variable
  	int* ptr = &myAge2;  // A pointer variable, with the name ptr, that stores the address of myAge

  	// Output the value of myAge (38)
  	printf("%d\n", myAge2);

  	// Output the memory address of myAge (0x7ffe5367e044), Muestra la direcci�n de memoria de myAge.
  	printf("Direcci�n de memoria de myAge: %p\n", &myAge2);

  	// Output the memory address of myAge with the pointer (0x7ffe5367e044),Muestra la direcci�n de memoria de myAge con el puntero.
  	printf("Direcci�n de memoria de myAge con el puntero (ptr): %p\n", ptr);
  	
  	//133
  	printf("---Desreferenciar.---\n");
  	int myAge3 = 37; // Declaracion de variable.
  	int* ptr2 = &myAge3; //Declaracion de Puntero.
  	// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
  	printf("Referenciado (*): %p\n", ptr2);
  	
  	// Dereference: Output the value of myAge with the pointer (43)
  	printf("Desreferenciado ( ): %d\n", *ptr2);
  	
  	/*
	Tenga en cuenta que el *signo puede ser confuso aqu�, ya que hace dos cosas diferentes en nuestro c�digo:
	1) Cuando se utiliza en la declaraci�n (int* ptr), crea una variable de puntero.
	2) Cuando no se utiliza en la declaraci�n, act�a como un operador de desreferencia.
	*/
	//Notas:
	/*1
	Es bueno saber: Hay dos formas de declarar variables de puntero en C:
	int* ptr;
	int *ptr;
	*/
	/*2
	Permiten manipular los datos en la memoria del ordenador. Esto puede reducir el c�digo y mejorar el rendimiento. 
	Si est�s familiarizado con estructuras de datos como listas, �rboles y gr�ficos
	*/
	/*3
	Pero tenga cuidado; los punteros deben manejarse con cuidado, ya que es posible da�ar los datos almacenados en otras direcciones 
	de memoria.
	*/


	return 0;
}
