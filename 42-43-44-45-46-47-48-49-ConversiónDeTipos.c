#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;
  int sum1 = 5 / 2;

  printf("Tendria que dar 2.5: %d\n", sum1); //Se tiene que hacer la conversion manual, ver mas adelante.

/*
Para obtener el resultado correcto, es necesario saber cómo se realiza la conversión de tipos.
Hay dos tipos de conversión en C:
*/

  printf("Conversión implícita (automática):\n");

	// Automatic conversion: int to float
	float myFloat = 9;
	printf("int a float: %f\n", myFloat);
  
	// Automatic conversion: float to int
	int myInt = 9.99;
	printf("float a int: %d\n", myInt);


  printf("Conversión explícita (manual):\n");
  /*
  La conversión explícita se realiza manualmente colocando el tipo entre paréntesis () delante del valor.
  Considerando nuestro problema del ejemplo anterior (x/y), ahora podemos obtener el resultado correcto:
  */
  
  //Ejemplo anterior
  float sum1_2 = 5 / 2;
  printf("Resultado sin conversion: %f\n", sum1_2);  // 2.000000
  
  // Manual conversion: int to float
  float sum2 = (float) 5 / 2;
  printf("Aplicando la conversion: %f\n", sum2);
  
  //También puedes colocar el tipo delante de una variable:
  int num1 = 5, num2 = 2;
  float sum3 = (float) num1 / num2;
  printf("Colocando la conversion delante de la variables: %f", sum3);
  //printf("%.1f", sum3); // Quitando decimales 2.5



  return 0;
}


